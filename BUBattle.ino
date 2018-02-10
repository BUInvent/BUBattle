
int awayTens[7] = {2, 3, 4, 5, 6, 7, 8};
void number0(int seg[]);
void number1(int seg[]);

void setup() {
  // put your setup code here, to run once:

  for (int i = 0; i < 7; i++) {
    pinMode(awayTens[i], OUTPUT);
  }

  Serial.begin(9600);

  

}

void loop() {
  
  // put your main code here, to run repeatedly:
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

void number0(int seg[]){
    digitalWrite(seg[0], LOW);
    digitalWrite(seg[1], LOW);
    digitalWrite(seg[2], LOW);
    digitalWrite(seg[3], LOW);
    digitalWrite(seg[4], LOW);
    digitalWrite(seg[5], LOW);
    digitalWrite(seg[6], HIGH);
}

void number1(int seg[]){
    digitalWrite(seg[0], HIGH);
    digitalWrite(seg[1], LOW);
    digitalWrite(seg[2], LOW);
    digitalWrite(seg[3], HIGH);
    digitalWrite(seg[4], HIGH);
    digitalWrite(seg[5], HIGH);
    digitalWrite(seg[6], HIGH);
}

void number2(int seg[]){
    digitalWrite(seg[0], LOW);
    digitalWrite(seg[1], LOW);
    digitalWrite(seg[2], HIGH);
    digitalWrite(seg[3], LOW);
    digitalWrite(seg[4], LOW);
    digitalWrite(seg[5], HIGH);
    digitalWrite(seg[6], LOW);
}

void number3(int seg[]){
    digitalWrite(seg[0], LOW);
    digitalWrite(seg[1], LOW);
    digitalWrite(seg[2], LOW);
    digitalWrite(seg[3], LOW);
    digitalWrite(seg[4], HIGH);
    digitalWrite(seg[5], HIGH);
    digitalWrite(seg[6], LOW);
}

void number4(int seg[]){
    digitalWrite(seg[0], HIGH);
    digitalWrite(seg[1], LOW);
    digitalWrite(seg[2], LOW);
    digitalWrite(seg[3], HIGH);
    digitalWrite(seg[4], HIGH);
    digitalWrite(seg[5], LOW);
    digitalWrite(seg[6], LOW);
}

void number5(int seg[]){
    digitalWrite(seg[0], LOW);
    digitalWrite(seg[1], HIGH);
    digitalWrite(seg[2], LOW);
    digitalWrite(seg[3], LOW);
    digitalWrite(seg[4], HIGH);
    digitalWrite(seg[5], LOW);
    digitalWrite(seg[6], LOW);
}

void number6(int seg[]){
    digitalWrite(seg[0], LOW);
    digitalWrite(seg[1], HIGH);
    digitalWrite(seg[2], LOW);
    digitalWrite(seg[3], LOW);
    digitalWrite(seg[4], LOW);
    digitalWrite(seg[5], LOW);
    digitalWrite(seg[6], LOW);
}

void number7(int seg[]){
    digitalWrite(seg[0], LOW);
    digitalWrite(seg[1], LOW);
    digitalWrite(seg[2], LOW);
    digitalWrite(seg[3], HIGH);
    digitalWrite(seg[4], HIGH);
    digitalWrite(seg[5], HIGH);
    digitalWrite(seg[6], HIGH);
}

void number8(int seg[]){
    digitalWrite(seg[0], LOW);
    digitalWrite(seg[1], LOW);
    digitalWrite(seg[2], LOW);
    digitalWrite(seg[3], LOW);
    digitalWrite(seg[4], LOW);
    digitalWrite(seg[5], LOW);
    digitalWrite(seg[6], LOW);
}

void number9(int seg[]){
    digitalWrite(seg[0], LOW);
    digitalWrite(seg[1], LOW);
    digitalWrite(seg[2], LOW);
    digitalWrite(seg[3], LOW);
    digitalWrite(seg[4], HIGH);
    digitalWrite(seg[5], LOW);
    digitalWrite(seg[6], LOW);
}

