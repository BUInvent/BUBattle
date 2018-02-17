
#include "SevSegNums.h"
#include "Arduino.h"

int awayTensBoard[7] = {2, 3, 4, 5, 6, 7, 8};
int awayOnesBoard[7] = {9, 10, 11, 12, 13, 22, 23};

int awayTens;
int awayOnes;

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
}

void loop() {

  if (Serial.available()) {
    
    data = Serial.readStringUntil(',');
    homeScore = Serial.readStringUntil(',');
    awayScore = Serial.readStringUntil(',');   
    period = Serial.readStringUntil(',');
    minutes = Serial.readStringUntil(',');
    seconds = Serial.readStringUntil('\n');

    Serial.print("\ndata = ");
    Serial.println(data);
    Serial.print("homeScore = ");
    Serial.println(homeScore);
    Serial.print("awayScore = ");
    Serial.println(awayScore);
    Serial.print("period = ");
    Serial.println(period);
    Serial.print("minutes = ");
    Serial.println(minutes);
    Serial.print("seconds = ");
    Serial.println(seconds);

    if(data != "data") return;
    awayTens = awayScore[awayScore.length()-2] - '0';
    awayOnes = awayScore[awayScore.length()-1] - '0';
    number[awayTens](awayTensBoard);
    number[awayOnes](awayOnesBoard);
    
  }
}


