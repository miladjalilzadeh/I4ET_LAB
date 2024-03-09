Char=a;
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT); 
}
void loop() 
{
  if (Serial.available()) 
  {
    a = Serial.read();
    if(a == 'O')
    {
      Serial.println(num);
      digitalWrite(LED_BUILTIN, LOW);
    }
    if(a == 'R')
    {
      Serial.println(num);
      digitalWrite(LED_BUILTIN, HIGH);
    }
  }
}
