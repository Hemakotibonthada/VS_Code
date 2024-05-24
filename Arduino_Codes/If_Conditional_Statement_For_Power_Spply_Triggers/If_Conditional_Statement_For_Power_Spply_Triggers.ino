#include <SoftwareSerial.h>
SoftwareSerial GSMSerial(9, 10);//(TX,RX)
const int Grid_1=A0;
const int Grid_2=A1;
const int Grid_3=A2;
const int Grid_4=A3;
const int Grid_5=A4;
const int Grid_6=A5;
const int LED_Power_ON_Indicator=  3;
const int LED_Power_OFF_Indicator= 4;
int Voltage, a, b, c;


      void setup() 
{
  Serial.begin(9600);
  GSMSerial.begin(9600);
  pinMode(Grid_1, INPUT);
  pinMode(Grid_2, INPUT);
  pinMode(Grid_3, INPUT);
  pinMode(Grid_4, INPUT);
  pinMode(Grid_5, INPUT);
  pinMode(Grid_6, INPUT);
  pinMode(LED_Power_ON_Indicator, OUTPUT);
  pinMode(LED_Power_OFF_Indicator, OUTPUT);
}

void loop()
{
//if (Serial.available()>0)
   //switch(Serial.read())
   {
     Voltage = analogRead(Grid_1);
      float Grid_1_Supply = ((Voltage/1023.0)*5);
      Serial.print("Grid_1_Supply; ");
      Serial.println(Grid_1_Supply);
  if (Grid_1_Supply > 3.5)
      digitalWrite(LED_Power_ON_Indicator, HIGH);
      else 
      digitalWrite(LED_Power_ON_Indicator, LOW);
  if (Grid_1_Supply > 3.5)
      GSMSerial.println(a);
      else
      GSMSerial.println(b);
      {
      GSMSerial.println("AT+CMGF=1");
     delay(1000);  // Delay of 1 second
     GSMSerial.println("AT+CMGS=\"+919966123105\"\r"); 
     delay(1000);
     GSMSerial.println("Hemakoti While Testing Type_1");
     delay(100);
     GSMSerial.println((char)26);// ASCII code of CTRL+Z for saying the end of sms to  the module 
      delay(1000);

      GSMSerial.println("AT+CMGF=1");  
     delay(1000);  // Delay of 1 second
     GSMSerial.println("AT+CMGS=\"+919966123105\"\r"); 
     delay(1000);
     GSMSerial.println("Hemakoti While Testing Type_2");
     delay(100);
     GSMSerial.println((char)26);
      delay(1000);
      }
      }
     
}
