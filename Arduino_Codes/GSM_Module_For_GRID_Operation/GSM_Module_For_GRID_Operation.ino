
#include <SoftwareSerial.h>

SoftwareSerial ForCommunication(8, 7);
const int AnalogPin = A0;

void setup()
{
  pinMode (AnalogPin , INPUT);
  ForCommunication.begin(9600);     
  Serial.begin(9600);
  delay(100);
}


void loop()
{
  Serial.println("11");
  if (Serial.available()>0)
   {
     int AnalogValue = analogRead(AnalogPin);
     char ch='k';
     Serial.println("22");
    if (AnalogValue > 0)
   {
    Serial.println("33");
      ForCommunication.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
     delay(1000);  // Delay of 1 second
     ForCommunication.println("AT+CMGS=\"+919966123105\"\r"); // Replace x with mobile number
     delay(1000);
     ForCommunication.println("This Message For Testing Purpose From GSM Module");// The SMS text you want to send
     delay(100);
     ForCommunication.println((char)26);// ASCII code of CTRL+Z for saying the end of sms to  the module 
      delay(1000);
   }
}

      
    
  

 if (ForCommunication.available()>0)
   Serial.write(ForCommunication.read());
}
