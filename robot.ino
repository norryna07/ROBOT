#include "roti.h"
#include "servo.h"
#include "ping.h"
#include "infrared.h"
#include "music.h"

void setup()
{
  //roti
  right_wheel.setSpeed(200);
  left_wheel.setSpeed(200);
  pinMode(right_led_pin, OUTPUT);
  pinMode(left_led_pin, OUTPUT);
  pinMode(buzzer_pin, OUTPUT);
  //servo
  pinMode(servo_pin, OUTPUT);
  digitalWrite(servo_pin, LOW);
  //ping
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  //infrared
  recep.enableIRIn();
  //music
  //little_star_start();
  //fur_elise_start();
  //play_song(little_star);
  //nokia_start();
}

void loop()
{
  nokia_start();
}
