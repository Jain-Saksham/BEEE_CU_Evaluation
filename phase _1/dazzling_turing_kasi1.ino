
void setup() {
Serial.begin(9600);
pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
   pinMode(12 ,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(7,INPUT);
}


void loop() {
int c = analogRead(A0);
  int i=8;
  delay(1000);
if(c<300)
{
if(digitalRead(7)==HIGH)
{
for(i=8;i<=13;i++)
{
  if(i<=12)
  {
    digitalWrite(i,HIGH);
digitalWrite(i+1,HIGH);
    all_leds_off();
    
  }
  if(i==13)
  {
    digitalWrite(i,HIGH);
    digitalWrite(i-5,HIGH);
    all_leds_off();
  }
}
}
  else 
  {
    digitalWrite(8,HIGH);
    digitalWrite(10,HIGH);
     digitalWrite(12,HIGH);
    all_leds_off();
    delay(2000);
    digitalWrite(9,HIGH);
    digitalWrite(11,HIGH);
     digitalWrite(13,HIGH);
    delay(2000);
    
    
  }
} 
}
 
  
  void all_leds_off()
  {
    for(int i=8;i<=13;i++)
    {
      digitalWrite(i,LOW);
    }
  }