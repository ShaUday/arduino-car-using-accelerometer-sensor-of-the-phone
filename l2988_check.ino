void setup() 
{
 pinMode(3,OUTPUT);     //LEFT MOTOR
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);     //RIGHT MOTOR 
 pinMode(6,OUTPUT);
}

void loop() 
{//FORWARD
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  delay(2000);
  
//BACKWARD
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay(2000);

}