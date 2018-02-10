
#include "SevSegNums.h"

int awayTens[7] = {2, 3, 4, 5, 6, 7, 8};
void number0(int seg[]);
void number1(int seg[]);

void setup() {

  for (int i = 0; i < 7; i++) {
    pinMode(awayTens[i], OUTPUT);
  }

  Serial.begin(9600);
}

void loop() {

  number0(awayTens);
  delay(1000);

  number1(awayTens);
  delay(1000);

  number2(awayTens);
  delay(1000);

  number3(awayTens);
  delay(1000);

  number4(awayTens);
  delay(1000);

  number5(awayTens);
  delay(1000);

  number6(awayTens);
  delay(1000);

  number7(awayTens);
  delay(1000);

  number8(awayTens);
  delay(1000);

  number9(awayTens);
  delay(1000);
}


