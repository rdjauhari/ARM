#include "src/Actuator/actuator.h"
#include "src/Ultrasonic/ultrasonic.h"
#include "src/Motor/motor.h"

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
  const int EN_C = 8;
  const int IN_5 = 9;
  const int IN_6 = 10;

  // Objects
  Actuator actuator1(EN_A, IN_1, IN_2); //vertical
  Actuator actuator2(EN_B, IN_3, IN_4); //horizontal
  Ultrasonic sensor1 (TRIG_PIN,ECHO_PIN); //top left from behind actuator
  Ultrasonic sensor2 (); //top right
  Ultrasonic sensor3 (); //bottom left
  Ultrasonic sensor4 (); //bottom right
  Ultrasonic sensor5 (); //winch distance
  Motor motor(EN_C, IN_5, IN_6);
  Servo servo ();

  // Variables
  int pos;
  int distance; //may not need
  int distance1;
  int distance2;
  int distance3;
  int distance4;
  int distance5;
  double timer;
  double time_avg;
  const double WINCH_DISTANCE_LEFT; //need to get this value
  const double WINCH_DISTANCE_RIGHT; //need to get this value

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
  servo.attach(9);
  Serial.begin(9600);
}

void loop() {
  timer = 0;

  motor.moveRight();
  if(distance5==WINCH_DISTANCE_RIGHT)
  {
    motor.stop();
    actuator1.contract();
    delay(2000);
    actuator1.stop();
  }
  motor.moveLeft();
  if(distance5==WINCH_DISTANCE_LEFT)
  {
    motor.stop();
    actuator1.contract();
    delay(2000);
    actuator1.stop();
  }
  
  distance1 = sensor1.readDistance();
  distance2 = sensor2.readDistance();
  distance3 = sensor3.readDistance();
  distance4 = sensor4.readDistance();
  distance5 = sensor5.readDistance();

  if(distance2>(distance1*1.5))
  {
//    if(distance2==(distance4+5) && distance2==(distance4-5))
//    {
//      actuator1.extend();    
//    }
//    if(distance4>(distance2*1.5))
//    {
//      actuator1.contract();
//      ++timer;
//    }
//    if(distance2>(distance4*1.5))
//    {
//      time_avg = timer/2;
//          
//      for(timer=0;timer<=time_avg;timer++)
//      {
//        actuator1.extend();
//      }
//    }
    motor.moveRight();
    if(distance1==(distance2+5) && distance1==(distance2-5))
    {
      motor.stop();
      actuator2.extend();
      //stops extending after a certain distance
      for (pos = 0; pos<=90; pos++)
      {
        myservo.write(pos); 
      }
    }
  }
  else if(distance1>(distance2*1.5))
  {
    if(distance1==(distance3+5) && distance1==(distance3-5))
//    {
//      actuator1.extend();    
//    }
//    if(distance3>(distance1*1.5))
//    {
//      actuator1.contract();
//      ++timer;
//    }
//    if(distance1>(distance3*1.5))
//    {
//      time_avg = timer/2;
//          
//      for(timer=0;timer<=time_avg;timer++)
//      {
//        actuator1.extend();
//      }
//    }
    motor.moveLeft();
    if(distance1==(distance2+5) && distance1==(distance2-5))
    {
      motor.stop();
      actuator2.extend();
      //stops extending after a certain distance
      for (pos = 0; pos<=90; pos++)
      {
        myservo.write(pos); 
      }
    }
  }
}

void reset(){
  for (pos = 90; pos>=0; pos--)
  {
    myservo.write(pos);
    actuator2.contract();
  }
  actuator1.contract();
  motor.moveLeft();
  if(distance5==WINCH_DISTANCE_LEFT)
  {
    motor.stop();
  }
}

