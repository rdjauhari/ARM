#ifndef MOTOR_H_
#define MOTOR_H_

#include "Arduino.h"

class Motor {
	
	private:
		int enablePin;
		int leftPin;
		int rightPin;
		
	public:
		Motor (int, int, int);
		void moveLeft();
		void moveRight();
		void stop();

};

#endif // MOTOR_H_

