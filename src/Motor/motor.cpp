#include "motor.h"

Motor::Motor(int enablePin, int leftPin, int rightPin)
{
	this->enablePin = enablePin;
	this->leftPin = leftPin;
	this->rightPin = rightPin;
}

void Motor::moveLeft()
{
	digitalWrite(enablePin, HIGH);
	digitalWrite(rightPin, LOW);
	delay(1000);
	digitalWrite(leftPin, HIGH);
}

void Motor::moveRight()
{
	digitalWrite(enablePin, HIGH);
	digitalWrite(leftPin, LOW);
	delay(1000);
	digitalWrite(rightPin, HIGH);
}

void Motor::stop()
{
	digitalWrite(enablePin, LOW);
	digitalWrite(leftPin, LOW);
	digitalWrite(rightPin, LOW);
}
