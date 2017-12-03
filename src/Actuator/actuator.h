#ifndef ACTUATOR_H_
#define ACTUATOR_H_

#include "Arduino.h"

class Actuator {
	
	private:
		int enablePin;
		int extendPin;
		int contractPin;
		
	public:
		Actuator (int, int, int);
		void extend();
		void contract();
		void stop();

};

#endif // ACTUATOR_H_
