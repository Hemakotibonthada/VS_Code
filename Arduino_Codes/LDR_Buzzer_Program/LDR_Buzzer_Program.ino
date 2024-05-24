
 const int ldrPin = 2;
 const int LDR=A0;
 const int ledPin = 3;
 const int LDRValue;
 int Trigger;
 void setup ()
 {
  pinMode (ldrPin, INPUT);
  pinMode (LDR, INPUT);
 pinMode (ledPin, OUTPUT);
  Serial.begin (9600);
 }
  void loop()
  {
    //Trigger = digitalRead (ldrPin);
    //Serial.println (Trigger);
    Trigger = analogRead (LDR);
   // delay (1000);
    Serial.println (Trigger);
    if (Trigger == 0)
    {
      digitalWrite ( ledPin, HIGH);   
    }
    else
    {
      digitalWrite (ledPin, LOW);
    }
  }
  
