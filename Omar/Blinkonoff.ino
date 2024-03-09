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
    //44=O
    if(num == 44)
    {
      Serial.println(num);
      digitalWrite(LED_BUILTIN, LOW);
    }
    //88=R
    if(num == 88)
    {
      Serial.println(num);
      digitalWrite(LED_BUILTIN, HIGH);
    }
  }
}
