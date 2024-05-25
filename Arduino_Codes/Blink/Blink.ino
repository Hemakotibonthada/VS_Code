String inputs;
int Switch1=4;
int Switch2=5;         //Hemakoti Bonthada//
int Switch3=6;
int Switch4=7; 
int Switch5=8;
int Switch6=9;
int Switch7=10;
int Switch8=11;
int Charger=12;
void setup()
{
Serial.begin(9600);
pinMode(Switch1, OUTPUT); 
pinMode(Switch2, OUTPUT); 
pinMode(Switch3, OUTPUT); 
pinMode(Switch4, OUTPUT); 
pinMode(Switch5, OUTPUT); 
pinMode(Switch6, OUTPUT); 
pinMode(Switch7, OUTPUT); 
pinMode(Switch8, OUTPUT);
pinMode(Charger, OUTPUT); 
digitalWrite(Switch1, HIGH);
digitalWrite(Switch2, HIGH);
digitalWrite(Switch3, HIGH);
digitalWrite(Switch4, HIGH);
digitalWrite(Switch5, HIGH);
digitalWrite(Switch6, HIGH);
digitalWrite(Switch7, HIGH);
digitalWrite(Switch8, HIGH);
digitalWrite(Charger, HIGH);
}
void loop()
  {
while(Serial.available()) 
{ 
char c = Serial.read();
if (c == '#'){
break; 
}
inputs += c; 
}
if (inputs.length() >0)
{
Serial.println(inputs);

if(inputs == "A")
{ 
digitalWrite(Switch1, HIGH);
}
else if(inputs == "a")
{
digitalWrite(Switch1, LOW);
}
else if(inputs == "C")
{
digitalWrite(Switch2, HIGH);
}
else if(inputs == "c")
{
digitalWrite(Switch2, LOW);
}
else if(inputs == "B")
{ 
digitalWrite(Switch3, HIGH);
}
else if(inputs == "b")
{
digitalWrite(Switch3, LOW);
}
else if(inputs == "D")
{
digitalWrite(Switch4, HIGH);
}
else if(inputs == "d")
{
digitalWrite(Switch4, LOW);
}
else if(inputs == "E")
{ 
digitalWrite(Switch5, HIGH);
}
else if(inputs == "e")
{
digitalWrite(Switch5, LOW);
}
else if(inputs == "F")
{
digitalWrite(Switch6, HIGH);
}
else if(inputs == "f")
{
digitalWrite(Switch6, LOW);
}
else if(inputs == "G")
{ 
digitalWrite(Switch7, HIGH);
}
else if(inputs == "g")
{
digitalWrite(Switch7, LOW);
}
else if(inputs == "H")
{
digitalWrite(Switch8, HIGH);
}
else if(inputs == "h")
{
digitalWrite(Switch8, LOW);
}
}
inputs="";
}
/*Guys If You Have Any Doubt About This Than Mail Me: Hemakotibonthada@gmail.com*/
