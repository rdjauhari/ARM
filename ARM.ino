#include "src/Actuator/Actuator.h"
#include "src/Ultrasonic/ultrasonic.h"


  // Ultrasonic Sensor Pins
  const int TRIG_PIN = 10;
  const int ECHO_PIN = 9;
  
  // Linear Actuator Pins
  const int FORWARD_PIN = 8;
  const int BACKWARD_PIN = 7;
  const int UP_PIN = 6;
  const int DOWN_PIN = 5;
  
  // Motor Pins for Winch
  const int LEFT_PIN = 4;
  const int RIGHT_PIN = 3;

  // Variables
  int distance;

void setup() {
  
  pinMode (TRIG_PIN, OUTPUT);
  pinMode (ECHO_PIN, INPUT);
  pinMode (FORWARD_PIN, OUTPUT);
  pinMode (BACKWARD_PIN, OUTPUT);
  pinMode (LEFT_PIN, OUTPUT);
  pinMode (RIGHT_PIN, OUTPUT);
  pinMode (UP_PIN, OUTPUT);
  pinMode (DOWN_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {

}
