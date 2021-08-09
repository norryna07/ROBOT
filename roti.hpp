//functiile pentru controlul deplasarii, pentru roti
#include <AFMotor.h>
#define time 685
#define tone_back 1000
#define tone_rl 1500

AF_DCMotor right_wheel(4), left_wheel(1);

int right_led_pin=A2, left_led_pin=A3;
int buzzer_pin=A4;

void front()
{
  right_wheel.run(FORWARD);
  left_wheel.run(FORWARD);
}

void back()
{
  right_wheel.run(BACKWARD);
  left_wheel.run(BACKWARD);
  tone(buzzer_pin, tone_back);
}

void turn_left()
{
  left_wheel.run(RELEASE);
  right_wheel.run(FORWARD);
  digitalWrite(left_led_pin, HIGH);
  for (int i=0; i<time; i+=200)
  {
    delay(100);
    tone(buzzer_pin, tone_rl);
    delay(100);
    tone(buzzer_pin, 0);
  }
  digitalWrite(left_led_pin, LOW);
}

void turn_right()
{
  right_wheel.run(RELEASE);
  left_wheel.run(FORWARD);
  digitalWrite(right_led_pin, HIGH);
  for (int i=0; i<time; i+=200)
  {
    delay(100);
    tone(buzzer_pin, tone_rl);
    delay(100);
    tone(buzzer_pin, 0);
  }
}

void turn_left_back()
{
  right_wheel.run(RELEASE);
  left_wheel.run(BACKWARD);
  delay(time);
}

void turn_right_back()
{
  left_wheel.run(RELEASE);
  right_wheel.run(BACKWARD);
  delay(time);
}

void pause()
{
  right_wheel.run(RELEASE);
  left_wheel.run(RELEASE);
}
