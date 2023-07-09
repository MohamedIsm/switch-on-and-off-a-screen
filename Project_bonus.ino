// C++ code
//
int led=13;
int button=4;
int buttonstate=0;
int buttonstate2=0;
int cou=0;
void setup()
{
  pinMode(led, OUTPUT);
   pinMode(led, INPUT);
}

void loop()
{
  buttonstate=digitalRead(button);
  if(buttonstate !=buttonstate2)
  {

    if(buttonstate==1)
    {
      cou++;
    }
  }
  buttonstate2=buttonstate;
  if(cou%2==0)
  {digitalWrite(led,HIGH);}
  
  else
  {digitalWrite(led,LOW);}
    
  
}