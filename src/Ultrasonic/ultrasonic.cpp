#include "ultrasonic.h"

int readDistance(int trigPin, int echoPin)
{
	long duration = 0;
	int distance = 0;
	
	digitalWrite(trigPin, LOW);
	delayMicroseconds(2);

	digitalWrite(trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(trigPin, LOW);

	duration = pulseIn(echoPin, HIGH, 100000000);

	distance = duration*0.034/2;
	
	return distance;
}
