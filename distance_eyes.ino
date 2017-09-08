
int checkDistance()   
{
  digitalWrite(Trig, LOW);   
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);  
  delayMicroseconds(20);
  digitalWrite(Trig, LOW);   
  float Fdistance = pulseIn(Echo, HIGH);  
  Fdistance= Fdistance/58;       
  return (int)Fdistance;
}

void look(String dir, int msec)
{
  if (dir == "center")
  {
    myservo.write(130);
    delay(msec);
  }
  else if (dir == "right")    
  { 
    myservo.write(60);
    delay(msec);
  }
  else if (dir == "left")   
  { 
    myservo.write(190);
    delay(msec);
  }
}


void look(String dir)
{
  if (dir == "center")
  {
    myservo.write(130);
  }
  else if (dir == "right")    
  { 
    myservo.write(70);
  }
  else if (dir == "left")   
  { 
    myservo.write(190);
  }
}
