void stop()
{
  digitalWrite(ENA,LOW);
  digitalWrite(ENB,LOW);
}
void stopFor(int msec)
{ 
  stop(); 
  delay(msec); 
}
void dirForward()
{
  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}
void forwardFor(int msec)
{
  dirForward();
  delay(msec);
}

void smartForward()
{
  if (checkDistance() > 30)
  {
    obstruction = false;
    dirForward();
  }
  else
  {
    stop();
    obstruction = true;
  }
}
void dirBack()
{
  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
void backFor(int msec)
{
  dirBack();
  delay(msec);
}

void rotateLeft()
{
  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);

  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  }
void rotateLeftFor(int msec)
{
  rotateLeft();
  delay(msec);
}

void rotateRight()
{
  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);

  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
void rotateRightFor(int msec)
{
  rotateRight();
  delay(msec);
}
