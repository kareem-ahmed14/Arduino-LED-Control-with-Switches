int green1=6;
int red1=7;
int red2=8;
int red3=9;
int red4=10;
int green2=11;
int button1=4;
int button2=5;

void setup()
{
    pinMode(green1, OUTPUT);
    pinMode(red1, OUTPUT);
    pinMode(red2, OUTPUT);
    pinMode(red3, OUTPUT);
    pinMode(red4, OUTPUT);
    pinMode(green2, OUTPUT);
    pinMode(button1, INPUT);
    pinMode(button2, INPUT);
}

void loop()
{
  if(digitalRead(button1)){
  digitalWrite(red1,HIGH);
    analogWrite(green1,128);
    delay(500);
  
  } 
  else{
    digitalWrite(red1,LOW);
    analogWrite(green1,0);
    delay(500);
  
  }
  
    if(digitalRead(button2)){
  digitalWrite(red3,HIGH);
    analogWrite(green2,128);
  delay(500);
  
  } 
  else{
    digitalWrite(red3,LOW);
    analogWrite(green2,0);
    delay(500);
  
  }
  
  
}