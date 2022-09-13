int buttonPin = 5;
int count=0;
int button;
#define LED1 12
#define LED2 13
#define LED3 14
#define LED4 26
#define LED5 27

void setup() 
{
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
pinMode(LED4,OUTPUT);
pinMode(LED5,OUTPUT);
pinMode(buttonPin,INPUT);
}

void loop()
{
button=digitalRead(buttonPin);
if(button==HIGH)
{
  count=count+1;
  while(digitalRead(buttonPin))
      delay(10);

if(count==1)
{
  digitalWrite(LED1,HIGH);
}
else if(count==2)
{
  digitalWrite(LED2,HIGH);
}
else if(count==3)
{
  digitalWrite(LED3,HIGH);
}
else if(count==4)
{
  digitalWrite(LED4,HIGH);
}
else if(count==5)
{
  digitalWrite(LED5,HIGH);
}
else if(count==6)
{
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);
  delay(300);
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,HIGH);
  digitalWrite(LED5,HIGH);
  delay(300);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);
  delay(500);
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,HIGH);
  digitalWrite(LED5,HIGH);
  delay(300);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);
  delay(500);
  count=0;
}
}
}
