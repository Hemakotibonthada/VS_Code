#include <SoftwareSerial.h>
SoftwareSerial SIM800(10, 9);
String textForSMS;
int data = 0;
int sensor = A1;
String Hemakoti = "+919966123105"; //Hemakoti's Number
String Sravani = "+918985021434"; //Srav's Number
void setup() {
 randomSeed(analogRead(0));
 Serial.begin(9600);
 SIM800.begin(9600);
Serial.println(" logging time completed!");
pinMode(sensor, INPUT);
delay(10000);

}
void loop() {
data = analogRead(sensor);
Serial.println(data);

 if ( data > 10)
 delay (10000);
 {
 textForSMS = "\nI'm In Danger/Being Absued By Someone, These Are My Co-Ordinates: https://goo.gl/maps/LpBDXmhAoGmyhWdv8";
 //sendSMS(textForSMS);
 sendsms(textForSMS, Hemakoti);
 Serial.println(textForSMS);
 Serial.println("message sent.");
delay(5000);
 sendsms(textForSMS, Sravani); 
 Serial.println(textForSMS);
 Serial.println("message sent.");
delay(5000);
 }
}
void sendsms(String message, String number)
{
String mnumber = "AT + CMGS = \""+number+"\"";
 SIM800.print("AT+CMGF=1\r");
 delay(1000);
SIM800.println(mnumber);
 delay(1000);
 SIM800.println(message);
 delay(1000);
 SIM800.println((char)26);
 delay(1000);
 SIM800.println();
 delay(100);
// SIM800power();
}
