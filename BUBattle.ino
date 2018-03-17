
/*
    Project BUScore by Jason
    This project file is for the "BattleShip" (Arduino Mega)
    It will grab serial data from the "HoverBoard" and post to the 7 segment displays
*/

#include "SevSegNums.h"
#include "Arduino.h"

#include <Wire.h>
#include <Adafruit_GFX.h>
#include "Adafruit_LEDBackpack.h"

Adafruit_7segment matrix = Adafruit_7segment();

// pinouts for each 7 segment display
int homeOnesBoard[7] = {2, 3, 4, 5, 6, 7, 8};
int homeTensBoard[7] = {9, 10, 11, 12, 13, 22, 23};
int awayOnesBoard[7] = {24, 25, 26, 27, 28, 29, 30};
int awayTensBoard[7] = {32, 33, 34, 35, 36, 37, 38};
int periodBoard[7] = {40, 41, 42, 43, 44, 45, 46};

int awayTens;
int awayOnes;
int homeTens;
int homeOnes;
int minutesTens;
int minutesOnes;
int secondsTens;
int secondsOnes;
int periodNum;

String data;
String homeScore;
String awayScore;
String period;
String minutes;
String seconds;

void setup() {

  // set all 7 segment display pins to output
  for (int i = 0; i < 7; i++) {
    pinMode(awayTensBoard[i], OUTPUT);
    pinMode(awayOnesBoard[i], OUTPUT);
    pinMode(homeTensBoard[i], OUTPUT);
    pinMode(homeOnesBoard[i], OUTPUT);
    pinMode(periodBoard[i], OUTPUT);
  }

  Serial.begin(9600);
  matrix.begin(0x70);

  // display all 0's on all 7 segment displays to start
  displayNumber[0](awayTensBoard);
  displayNumber[0](awayOnesBoard);
  displayNumber[0](homeTensBoard);
  displayNumber[0](homeOnesBoard);
  displayNumber[0](periodBoard);
  
  matrix.writeDigitNum(0, 0, false);
  matrix.writeDigitNum(1, 0, false);
  matrix.drawColon(true);
  matrix.writeDigitNum(3, 0, false);
  matrix.writeDigitNum(4, 0, false);
  matrix.writeDisplay();
  
}

void loop() {

  if (Serial.available()) {
    
    // if we receive data, parse it
    data = Serial.readStringUntil(',');
    awayScore = Serial.readStringUntil(',');
    homeScore = Serial.readStringUntil(',');
    period = Serial.readStringUntil(',');
    minutes = Serial.readStringUntil(',');
    seconds = Serial.readStringUntil('\n');

    // convert the string data that was parsed into integers
    if(data != "data") return;
    awayTens = awayScore[awayScore.length()-2] - '0';
    awayOnes = awayScore[awayScore.length()-1] - '0';
    homeTens = homeScore[homeScore.length()-2] - '0';
    homeOnes = homeScore[homeScore.length()-1] - '0';
    minutesTens = minutes[0] - '0';
    minutesOnes = minutes[1] - '0';
    secondsTens = seconds[0] - '0';
    secondsOnes = seconds[1] - '0';
    periodNum = period.toInt();

    // display the scores and period
    displayNumber[awayTens](awayTensBoard);
    displayNumber[awayOnes](awayOnesBoard);
    displayNumber[homeTens](homeTensBoard);
    displayNumber[homeOnes](homeOnesBoard);
    displayNumber[periodNum](periodBoard);

    // display the time
    matrix.writeDigitNum(0, minutesTens, false);
    matrix.writeDigitNum(1, minutesOnes, false);
    matrix.drawColon(true);
    matrix.writeDigitNum(3, secondsTens, false);
    matrix.writeDigitNum(4, secondsOnes, false);
    matrix.writeDisplay();
    
  }
}


