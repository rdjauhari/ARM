#include "src/Actuator/actuator.h"
#include "src/Ultrasonic/ultrasonic.h"


  // Ultrasonic Sensor Pins
  const int TRIG_PIN = 8;
  const int ECHO_PIN = 7;
  
  // Linear Actuator Pins
  const int EN_A = 2;
  const int IN_1 = 3;
  const int IN_2 = 4;
  const int EN_B = 5;
  const int IN_3 = 6;
  const int IN_4 = 7;
  
  // Motor Pins for Winch

  // Objects
  Actuator actuator1(EN_A, IN_1, IN_2);
  Actuator actuator2(EN_B, IN_3, IN_4);

  // Variables
  int distance;

void setup() {
  
  pinMode (TRIG_PIN, OUTPUT);
  pinMode (ECHO_PIN, INPUT);
  pinMode (EN_A, OUTPUT);
  pinMode (IN_1, OUTPUT);
  pinMode (IN_2, OUTPUT);
  pinMode (EN_B, OUTPUT);
  pinMode (IN_3, OUTPUT);
  pinMode (IN_4, OUTPUT);
  digitalWrite (IN_1, LOW);
  digitalWrite (IN_2, LOW);
  digitalWrite (IN_3, LOW);
  digitalWrite (IN_4, LOW);
  digitalWrite (EN_A, HIGH);
  digitalWrite (EN_B, HIGH);
  Serial.begin(9600);
}

void loop() {
  
  actuator1.stop();
  actuator2.stop();

}
