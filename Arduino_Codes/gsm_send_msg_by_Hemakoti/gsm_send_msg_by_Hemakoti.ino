#include <SoftwareSerial.h>
//#include <ESP8266WiFi.h>
SoftwareSerial GSMModule(9, 10);//(TX,RX)
const int Grid_1=A0 ;
const int Grid_2=A1;
const int Grid_3=A2;
const int Grid_4=A3;
const int Grid_5=A4;
const int Grid_6=A5;


void setup()
{
  GSMModule.begin(9600);
  Serial.begin(9600);
  delay(100);
  pinMode(Grid_1, INPUT);
  pinMode(Grid_2, INPUT);
  pinMode(Grid_3, INPUT);
  pinMode(Grid_4, INPUT);
  pinMode(Grid_5, INPUT);
  pinMode(Grid_6, INPUT);
}


void loop()
{
  if (Serial.available()>0)
   switch(Serial.read())
 //analogRead (Grid_1);
  {
    case 'a':
      GSMModule.println("AT+CMGF=1");
     delay(1000);  // Delay of 1 second
     GSMModule.println("AT+CMGS=\"+919966123105\"\r"); 
     delay(1000);
     GSMModule.println("Abstcle Found On Dot Range");
     delay(100);
     GSMModule.println((char)26);// ASCII code of CTRL+Z for saying the end of sms to  the module 
      delay(1000);
      break;

   /* case 'b':
      GSMModule.println("AT+CMGF=1");  
     delay(1000);  // Delay of 1 second
     GSMModule.println("AT+CMGS=\"+919966123105\"\r"); 
     delay(1000);
     GSMModule.println("Hemakoti While Testing Type_2");
     delay(100);
     GSMModule.println((char)26);
      delay(1000);
      break;

    case 'C':
      GSMModule.println("AT+CMGF=1");    
     delay(1000);  // Delay of 1 second
     GSMModule.println("AT+CMGS=\"+919966123105\"\r"); 
     delay(1000);
     GSMModule.println("Hemakoti While Testing Type_3");
     delay(100);
     GSMModule.println((char)26);// ASCII code of CTRL+Z for saying the end of sms to  the module 
      delay(1000);
      break;
      
       case 'r':
      GSMModule.println("AT+CNMI=2,2,0,0,0"); // AT Command to receive a live SMS
      delay(1000);
      break;*/
      
  }

 if (GSMModule.available()>0)
   Serial.write(GSMModule.read());
}
