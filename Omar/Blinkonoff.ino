int num=0;
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT); 
}
void loop() 
{
  if (Serial.available() > 0) 
  {
    num = Serial.read();
    //77=M
    if(num == 77)
    {
      Serial.println(num);
      digitalWrite(LED_BUILTIN, LOW);
    }
    //68=D
    if(num == 68)
    {
      Serial.println(num);
      digitalWrite(LED_BUILTIN, HIGH);
    }
  }
}
