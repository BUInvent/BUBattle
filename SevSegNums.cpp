
#include "SevSegNums.h"

void zero(int seg[]) {
  digitalWrite(seg[0], LOW);
  digitalWrite(seg[1], LOW);
  digitalWrite(seg[2], LOW);
  digitalWrite(seg[3], LOW);
  digitalWrite(seg[4], LOW);
  digitalWrite(seg[5], LOW);
  digitalWrite(seg[6], HIGH);
}

void one(int seg[]) {
  digitalWrite(seg[0], HIGH);
  digitalWrite(seg[1], LOW);
  digitalWrite(seg[2], LOW);
  digitalWrite(seg[3], HIGH);
  digitalWrite(seg[4], HIGH);
  digitalWrite(seg[5], HIGH);
  digitalWrite(seg[6], HIGH);
}

void two(int seg[]) {
  digitalWrite(seg[0], LOW);
  digitalWrite(seg[1], LOW);
  digitalWrite(seg[2], HIGH);
  digitalWrite(seg[3], LOW);
  digitalWrite(seg[4], LOW);
  digitalWrite(seg[5], HIGH);
  digitalWrite(seg[6], LOW);
}

void three(int seg[]) {
  digitalWrite(seg[0], LOW);
  digitalWrite(seg[1], LOW);
  digitalWrite(seg[2], LOW);
  digitalWrite(seg[3], LOW);
  digitalWrite(seg[4], HIGH);
  digitalWrite(seg[5], HIGH);
  digitalWrite(seg[6], LOW);
}

void four(int seg[]) {
  digitalWrite(seg[0], HIGH);
  digitalWrite(seg[1], LOW);
  digitalWrite(seg[2], LOW);
  digitalWrite(seg[3], HIGH);
  digitalWrite(seg[4], HIGH);
  digitalWrite(seg[5], LOW);
  digitalWrite(seg[6], LOW);
}

void five(int seg[]) {
  digitalWrite(seg[0], LOW);
  digitalWrite(seg[1], HIGH);
  digitalWrite(seg[2], LOW);
  digitalWrite(seg[3], LOW);
  digitalWrite(seg[4], HIGH);
  digitalWrite(seg[5], LOW);
  digitalWrite(seg[6], LOW);
}

void six(int seg[]) {
  digitalWrite(seg[0], LOW);
  digitalWrite(seg[1], HIGH);
  digitalWrite(seg[2], LOW);
  digitalWrite(seg[3], LOW);
  digitalWrite(seg[4], LOW);
  digitalWrite(seg[5], LOW);
  digitalWrite(seg[6], LOW);
}

void seven(int seg[]) {
  digitalWrite(seg[0], LOW);
  digitalWrite(seg[1], LOW);
  digitalWrite(seg[2], LOW);
  digitalWrite(seg[3], HIGH);
  digitalWrite(seg[4], HIGH);
  digitalWrite(seg[5], HIGH);
  digitalWrite(seg[6], HIGH);
}

void eight(int seg[]) {
  digitalWrite(seg[0], LOW);
  digitalWrite(seg[1], LOW);
  digitalWrite(seg[2], LOW);
  digitalWrite(seg[3], LOW);
  digitalWrite(seg[4], LOW);
  digitalWrite(seg[5], LOW);
  digitalWrite(seg[6], LOW);
}

void nine(int seg[]) {
  digitalWrite(seg[0], LOW);
  digitalWrite(seg[1], LOW);
  digitalWrite(seg[2], LOW);
  digitalWrite(seg[3], LOW);
  digitalWrite(seg[4], HIGH);
  digitalWrite(seg[5], LOW);
  digitalWrite(seg[6], LOW);
}

void finalScore(int seg[]) {
  digitalWrite(seg[0], LOW);
  digitalWrite(seg[1], HIGH);
  digitalWrite(seg[2], HIGH);
  digitalWrite(seg[3], HIGH);
  digitalWrite(seg[4], LOW);
  digitalWrite(seg[5], LOW);
  digitalWrite(seg[6], LOW);
}

num_func displayNumber[] = { zero, one, two, three, four, five, six, seven, eight, nine, finalScore };

