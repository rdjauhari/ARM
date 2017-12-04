#include "actuator.h"

Actuator::Actuator (int enablePin, int extendPin, int contractPin)
{
	this->enablePin = enablePin;
	this->extendPin = extendPin;
	this->contractPin = contractPin;
}	

void Actuator::contract()
{
	digitalWrite(enablePin, HIGH);
	digitalWrite(contractPin, LOW);
	delay(1000);
	digitalWrite(extendPin, HIGH);
}

void Actuator::extend()
{
	digitalWrite(enablePin, HIGH);
	digitalWrite(extendPin, LOW);
	delay(1000);
	digitalWrite(contractPin, HIGH);
}

void Actuator::stop()
{
	digitalWrite(enablePin, LOW);
	digitalWrite(extendPin, LOW);
	digitalWrite(contractPin, LOW);
}
	
