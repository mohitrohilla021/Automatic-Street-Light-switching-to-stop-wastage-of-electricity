// Author = MOHIT KUMAR ROHILLA
void setup()
{
  pinMode(9, INPUT);
  pinMode(11, OUTPUT);
  
}

void loop()
{
  if(digitalRead(9)==HIGH)
  {
 	 digitalWrite(11, HIGH);

  }
  else
    digitalWrite(11,LOW);
    
} 
