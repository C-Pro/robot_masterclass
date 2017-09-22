#include <AFMotor.h>

#define ledPin 13

#define SPEED 200
AF_DCMotor motor1(1, MOTOR12_8KHZ);
AF_DCMotor motor2(4, MOTOR12_8KHZ);

void setup() {
  Serial.begin(38400);
  pinMode(ledPin, OUTPUT);
  motor1.run(RELEASE);
  motor2.run(RELEASE);
}

void set_speed(int m1, int m2)
{
  //Not all motors are created equal
  motor1.setSpeed(m1 - 35);
  motor2.setSpeed(m2);
}

void right()
{
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
  set_speed(SPEED / 1.5, SPEED / 1.5);
}

void left()
{
  motor1.run(BACKWARD);
  motor2.run(FORWARD);
  set_speed(SPEED / 1.5, SPEED / 1.5);
}

void forward()
{
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  set_speed(SPEED, SPEED);
}

void backward()
{
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  set_speed(SPEED, SPEED);
}

void stop()
{
  motor1.run(RELEASE);
  motor2.run(RELEASE);
}


void loop() {

  set_speed(SPEED, SPEED);
  while (true)
  {
    if (Serial.peek() != -1) {
      char cmd = Serial.read();
      switch (cmd) {
        case 'S': stop();
          break;
        case 'F': forward();
          break;
        case 'B': backward();
          break;
        case 'L': left();
          break;
        case 'R': right();
          break;
      }
    }
    delay(30);
  }
}
