int in1 =3;
int in2=4;
int sensor =5;

void setup()
{
  pinMode(sensor,INPUT_PULLUP);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
} 
  
void loop()
{
  if (digitalRead(sensor)==0)
  {
   digitalWrite(in1,1);
   digitalWrite(in2,0); 
  }
  else
  {
   digitalWrite(in1,0);
   digitalWrite(in2,0);  
  } 
    
}    
    
    
    
