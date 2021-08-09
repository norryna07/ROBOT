
int servo_pin=10;

void look_left()
{
    digitalWrite(servo_pin, HIGH);
    delayMicroseconds(2500);
    digitalWrite(servo_pin, LOW);
    delayMicroseconds(17500);
}

void look_right()
{
    digitalWrite(servo_pin, HIGH);
    delayMicroseconds(500);
    digitalWrite(servo_pin, LOW);
    delayMicroseconds(19500); 
}

void look_front()
{
    digitalWrite(servo_pin, HIGH);
    delayMicroseconds(1500);
    digitalWrite(servo_pin, LOW);
    delayMicroseconds(18500); 
}