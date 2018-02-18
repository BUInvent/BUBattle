
#include "SevSegNums.h"
#include "Arduino.h"

#include <Wire.h> // Enable this line if using Arduino Uno, Mega, etc.
#include <Adafruit_GFX.h>
#include "Adafruit_LEDBackpack.h"

Adafruit_7segment matrix = Adafruit_7segment();

int awayTensBoard[7] = {2, 3, 4, 5, 6, 7, 8};
int awayOnesBoard[7] = {9, 10, 11, 12, 13, 22, 23};

int awayTens;
int awayOnes;
int minutesTens;
int minutesOnes;
int secondsTens;
int secondsOnes;

String data;
String homeScore;
String awayScore;
String period;
String minutes;
String seconds;

void setup() {

  for (int i = 0; i < 7; i++) {
    pinMode(awayTensBoard[i], OUTPUT);
    pinMode(awayOnesBoard[i], OUTPUT);
  }

  Serial.begin(9600);
  matrix.begin(0x70);
  
}

void loop() {

  if (Serial.available()) {
    
    data = Serial.readStringUntil(',');
    homeScore = Serial.readStringUntil(',');
    awayScore = Serial.readStringUntil(',');   
    period = Serial.readStringUntil(',');
    minutes = Serial.readStringUntil(',');
    seconds = Serial.readStringUntil('\n');

    if(data != "data") return;
    awayTens = awayScore[awayScore.length()-2] - '0';
    awayOnes = awayScore[awayScore.length()-1] - '0';
    minutesTens = minutes[0] - '0';
    minutesOnes = minutes[1] - '0';
    secondsTens = seconds[0] - '0';
    secondsOnes = seconds[1] - '0';
    
    displayNumber[awayTens](awayTensBoard);
    displayNumber[awayOnes](awayOnesBoard);

    matrix.writeDigitNum(0, minutesTens, false);
    matrix.writeDigitNum(1, minutesOnes, false);
    matrix.drawColon(true);
    matrix.writeDigitNum(3, secondsTens, false);
    matrix.writeDigitNum(4, secondsOnes, false);
    matrix.writeDisplay();
    
  }
}


