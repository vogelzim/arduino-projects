#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

const int joyX = A0;
const int joyY = A1;

const int pot1 = A2;
const int pot2 = A3;

void setup() {

  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
}

void loop() {

  // JOYSTICK X
  int xVal = analogRead(joyX);
  xVal = map(xVal, 0, 1023, 0, 180);
  servo1.write(xVal);

  // JOYSTICK Y
  int yVal = analogRead(joyY);
  yVal = map(yVal, 0, 1023, 0, 180);
  servo2.write(yVal);

  // POT1
  int potVal1 = analogRead(pot1);
  potVal1 = map(potVal1, 0, 1023, 0, 180);
  servo3.write(potVal1);

  // POT2
  int potVal2 = analogRead(pot2);
  potVal2 = map(potVal2, 0, 1023, 0, 180);
  servo4.write(potVal2);

  delay(10);
}
