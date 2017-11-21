#ifndef ACTUATOR_H_
#define ACTUATOR_H_

#include "Arduino.h"

class Actuator {
	
	private:
		int extendPin;
		int contractPin;
		
	public:
		Actuator (int, int)
		void extend()
		void contract()

};

#endif // ACTUATOR_H_
