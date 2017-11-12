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

void moveUp(int upPin, int downPin)
{
	digitalWrite(downPin, LOW);
	delay(1000);
	digitalWrite(upPin, HIGH);
}

void moveDown(int downPin, int upPin)
{
	digitalWrite(upPin, LOW);
	delay(1000);
	digitalWrite(downPin, HIGH);
}
