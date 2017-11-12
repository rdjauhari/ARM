#include "src/Movement/movement.h"
#include "src/Ultrasonic/ultrasonic.h"
 
  // Ultrasonic Sensor Pins
  const int TRIG_PIN = 10;
  const int ECHO_PIN = 9;
  
  // Linear Actuator Pins
  const int FORWARD_PIN = 8;
  const int BACKWARD_PIN = 7;
  const int LEFT_PIN = 6;
  const int RIGHT_PIN = 5;

  // Variables
  int distance;

void setup() {
  
  pinMode (TRIG_PIN, OUTPUT);
  pinMode (ECHO_PIN, INPUT);
  pinMode (FORWARD_PIN, OUTPUT);
  pinMode (BACKWARD_PIN, OUTPUT);
  pinMode (LEFT_PIN, OUTPUT);
  pinMode (RIGHT_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  distance = readDistance(TRIG_PIN, ECHO_PIN);

  Serial.print("Distance: ");
  Serial.println(distance);

}
