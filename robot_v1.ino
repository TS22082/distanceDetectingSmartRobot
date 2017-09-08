#include <Servo.h> //servo library

Servo myservo;

//for distance detection 
int Echo = A4, Trig = A5; 

String left = "left", right = "right", center = "center";

bool obstruction = false;

//motor control
int in1=6, in2=7, in3=8, in4=9;

// channel output pins
int ENA=5, ENB=11;

//distance parameters
int rightDistance, leftDistance, middleDistance;

void setup()
{
  myservo.attach(3);
  Serial.begin(9600);

  pinMode(Echo, INPUT);    
  pinMode(Trig, OUTPUT);

  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
}

void loop() 
{
  look(center);
  
  if (obstruction == false){
      smartForward();
    }
  else {
    look(left,200);
    leftDistance = checkDistance();
    look(right,200);
    rightDistance = checkDistance();
    look(center);
    middleDistance = checkDistance();

    if (leftDistance > rightDistance){
        rotateLeftFor(200);
        smartForward();
      }
    else if (rightDistance > leftDistance){
        rotateRightFor(200);
        smartForward();
      }
  }
}

