// const int DOOR_SENSOR_PIN = 3; // Arduino pin connected to door sensor's pin

// int doorState;
// int pin1;
// int pin2;
// int pin3;
// int pin4;
// int pin5;
// int pin6;
// int pin7;
// int pin8;
// int pin9;
// int pin0;
// int i=0;
// int Pass;
// void setup() {
//   Serial.begin(9600);                     // initialize serial
//   pinMode(DOOR_SENSOR_PIN, INPUT_PULLUP); // set arduino pin to input pull-up mode
// }

// void loop() {
//   while(i<5){
//     pass= digitalRead(pin1)
//   }
//   doorState = digitalRead(DOOR_SENSOR_PIN); // read state

//   if (doorState == HIGH) {
//     Serial.println("The door is open");
//   } else {
//     Serial.println("The door is closed");
//   }
// }


const int buttonPins[] = {2, 3, 4, 5,6,7}; // Define the pin numbers for the buttons
const int ledPin = 8; // Define the pin number for the LED

const char password[] = "1234"; // Define your password here
char enteredPassword[5] = "";    // Stores entered digits
int passwordIndex = 0;
bool unlocked = false;

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP); // Enable internal pull-up resistors
  }
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW); // Initially, the LED is off (locked)
  Serial.begin(9600);
}

void loop() {
  checkButtons();
}

void checkButtons() {
  for (int i = 0; i < 4; i++) {
    if (digitalRead(buttonPins[i]) == LOW) {
      char digit = i + '0';
      enteredPassword[passwordIndex] = digit;
      passwordIndex++;
      Serial.print(digit);
      delay(200); // Debounce delay
    }
  }

  if (passwordIndex == 4) {
    if (strcmp(enteredPassword, password) == 0) {
      unlock();
    } else {
      Serial.println("\nAccess Denied");
      passwordIndex = 0;
      memset(enteredPassword, 0, sizeof(enteredPassword));
    }
  }
}

void unlock() {
  Serial.println("\nAccess Granted");
  unlocked = true;
  passwordIndex = 0;
  memset(enteredPassword, 0, sizeof(enteredPassword));
  digitalWrite(ledPin, HIGH); // Turn on the LED (unlocked)

  // You can add additional actions here, such as unlocking a physical mechanism
  // or performing other tasks when the correct password is entered.

  delay(2000); // Keep the LED on for 2 seconds (simulating an unlocked state)
  digitalWrite(ledPin, LOW); // Turn off the LED (locked)
  unlocked = false;
}
