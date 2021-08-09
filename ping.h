int echo_pin=A0, trig_pin=A1;
int max_dist=300;
int time_out=max_dist*60;
int v=340;

float distance()
{
    unsigned long ping;
    float dist;
    digitalWrite(trig_pin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig_pin, LOW);
    ping=pulseIn(echo_pin, HIGH, time_out);
    if (ping==0) return 350;
    dist=(float)ping*v/2/10000;
    return dist;
}