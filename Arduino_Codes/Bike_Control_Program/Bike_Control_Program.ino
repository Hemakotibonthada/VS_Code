String inputs;
int Power_Key=3;
int Horn=4;
int Head_Light=5;
int Side_Light_Right=6;
int Side_Light_Left=7;

void setup ()
{ 
  Serial.begin(9600);
  pinMode (Power_Key, OUTPUT);
  pinMode (Horn, OUTPUT);
  pinMode (Head_Light, OUTPUT);
  pinMode (Side_Light_Right, OUTPUT) ;
  pinMode (Side_Light_Left, OUTPUT) ;
  digitalWrite (Power_Key, LOW) ;
  digitalWrite (Horn, LOW) ; 
  digitalWrite (Head_Light, LOW) ;
  digitalWrite (Side_Light_Right, LOW) ;  
  digitalWrite (Side_Light_Left, LOW) ;
  
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
digitalWrite(Power_Key, LOW);
}
else if(inputs == "a")
{
digitalWrite(Power_Key, HIGH);
}
else if(inputs == "B")
{
digitalWrite(Horn, LOW);
}
else if(inputs == "b")
{
digitalWrite(Horn, HIGH);
}
else if(inputs == "C")
{
digitalWrite(Head_Light, HIGH);
}
else if(inputs == "c")
{
digitalWrite(Side_Light_Right, HIGH);
}
else if(inputs == "D")
{
digitalWrite(Side_Light_Left, HIGH);
}
}
inputs="";
}
