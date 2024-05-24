#include "DHT.h"

#define DHTPIN 3       // Define the pin where the sensor is connected
#define DHTTYPE DHT11   // Change this to DHT11 if you're using that sensor

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);  // Wait a few seconds between readings

  float humidity = dht.readHumidity();   // Read humidity value
  float temperature = dht.readTemperature();  // Read temperature value in Celsius (default)

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
  } else {
    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.print(" %\t");
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" °C");
  }
}
