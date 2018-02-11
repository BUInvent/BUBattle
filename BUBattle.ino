
#include "SevSegNums.h"

int awayTens[7] = {2, 3, 4, 5, 6, 7, 8};
String data;
String homeScore;
String awayScore;
String period;
String minutes;
String seconds;

void setup() {

  for (int i = 0; i < 7; i++) {
    pinMode(awayTens[i], OUTPUT);
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

    Serial.print("data = ");
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
  }
}


