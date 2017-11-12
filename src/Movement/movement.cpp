#include "movement.h"


void moveForward(int forwardPin, int backwardPin)
{
	digitalWrite(backwardPin, LOW);
	delay(1000);
	digitalWrite(forwardPin, HIGH);
}

void moveBackward(int backwardPin, int forwardPin)
{
	digitalWrite(forwardPin, LOW);
	delay(1000);
	digitalWrite(backwardPin, HIGH);
}

void moveLeft(int leftPin, int rightPin)
{
	digitalWrite(rightPin, LOW);
	delay(1000);
	digitalWrite(leftPin, HIGH);
}

void moveRight(int rightPin, int leftPin)
{
	digitalWrite(leftPin, LOW);
	delay(1000);
	digitalWrite(rightPin, HIGH);
}
