#include <AFMotor.h>

#define ledPin 13

AF_DCMotor motor1(1, MOTOR12_8KHZ);
AF_DCMotor motor2(4, MOTOR12_8KHZ);

void setup() {
  // put your setup code here, to run once:
  motor1.setSpeed(200);
  motor2.setSpeed(200);
}

void loop() {
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  delay(500);
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
  delay(100);
}
