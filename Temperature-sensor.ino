// C++ code
//
#include <Servo.h>

int point1 = 0;

int i = 0;

int j = 0;

Servo servo_9;

void setup()
{
  servo_9.attach(9, 500, 2500);
}

void loop()
{
  point1 = 0;
  for (point1 = 1; point1 <= 90; point1 += 1) {
    servo_9.write(point1);
    delay(30); // Wait for 30 millisecond(s)
  }
  for (point1 = 90; point1 >= 1; point1 -= 1) {
    servo_9.write(point1);
  }
}
