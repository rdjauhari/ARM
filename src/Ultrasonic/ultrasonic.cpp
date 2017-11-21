#include "ultrasonic.h"

Ultrasonic::Ultrasonic (int trigPin, int echoPin) {
	
	this->trigPin = trigPin;
	this->echoPin = echoPin;
	
}

int Ultrasonic::readDistance() {
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
