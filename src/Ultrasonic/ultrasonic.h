#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_

#include "Arduino.h"

class Ultrasonic {
	
	private:
		int trigPin;
		int echoPin;
		
	public:
		Ultrasonic (int, int);
		int readDistance();
	
};

#endif // ULTRASONIC_H_

