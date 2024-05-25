#include <LiquidCrystal.h>
LiquidCrystal lcd(6, 7, 8, 9, 10, 11);
const int trigPin = 12;
const int echoPin = 13;
const int Relay = 5;
const int Display_Light =4;
const int Battery_Levels = A1;
int Voltage,Percentage,Low_Battery;
long duration;
int distance;
int distanceCm, Motor_ON, Motor_OFF ;


void setup() 
{
     lcd.begin(16,2);
     pinMode(trigPin, OUTPUT);
     pinMode(echoPin, INPUT); 
     pinMode(Relay, OUTPUT);
     pinMode(Display_Light, OUTPUT);
     pinMode ( Battery_Levels , INPUT);
     Serial.begin(9600); 
}
void loop() 
{
     Voltage = analogRead(Battery_Levels);
     float voltage= ((Voltage/1023.0)*5);
     int Charging = ((voltage/5)*100);
     Serial.print("Charging: ");
     Serial.print(Charging);
     Serial.println("%");
     lcd.setCursor(2,1);
     /*lcd.print("Charging: ");
     lcd.print(Charging);*/
     if (Charging<=20)
     lcd.print("Low_Battery");
     Serial.println("Low_Battery");
     if (Charging<=20)
     digitalWrite(Display_Light, HIGH);
     if (Charging>=100)
     lcd.print("Full Charged");
     Serial.println("Full Charged");
     if (Charging>=100)
     digitalWrite(Display_Light, HIGH);
     /*if (Charging<=100)
     digitalWrite(Display_Light, LOW);*/

//Program For Ultrasonic Sensor...
     digitalWrite(trigPin, LOW);
     delayMicroseconds(2);
     digitalWrite(trigPin, HIGH);
     delayMicroseconds(10);
     digitalWrite(trigPin, LOW);
     duration = pulseIn(echoPin, HIGH);
     distance= duration*0.034/2;
     Serial.print("Distance: ");
     Serial.println(distance);
     lcd.setCursor(0,0);
     lcd.print("Distance: ");
     delay(10); 
     if (distance <20 )
     digitalWrite(Relay , HIGH);
     else 
     digitalWrite(Relay , LOW);
     lcd.setCursor(0,0); 
     lcd.print("Distance: ");
     lcd.print(distance); 
     lcd.print(" cm       ");
     delay(100);
     if (distance <20 )
     digitalWrite(Display_Light, HIGH);
     else 
     digitalWrite(Display_Light, LOW);
     lcd.setCursor(2,1);
     if (distance<20)
     digitalWrite(Relay , HIGH);
     if (distance<20)
     lcd.print("Put Your Hands");
     delay(100);
     if (distance>20)
     digitalWrite(Relay , LOW);
     if(distance>20)
     lcd.print ("Please Don't Waste Sanitizer");
     delay(100);
     
     
}
