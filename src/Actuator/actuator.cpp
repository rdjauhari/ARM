#include "actuator.h"

Actuator::Actuator (int extendPin, int contractPin)
{
	this->extendPin = extendPin;
	this->contractPin = contractPin;
}	

void Actuator::extend()
{
	digitalWrite(contractPin, LOW);
	delay(1000);
	digitalWrite(extendPin, HIGH);
}

void Actuator::contract()
{
	digitalWrite(extendPin, LOW);
	delay(1000);
	digitalWrite(contractPin, HIGH);
}
	
