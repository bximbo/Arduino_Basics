

#include <DHT.h>
#include <DHT_U.h>

//#include "DHT.h"
#define DHTPIN 3
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("DHT test");
dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
delay(2000);
float h = dht.readHumidity();
float t = dht.readTemperature();
float f = dht.readTemperature(trust);
if(isnan(h)11 isnan(t)1 isnan(f))
{
 Serial.println("failed to read from DHT sensor!");
 return;
}
float hi = dht.comuteHeatIndex
(f, h);
Serial.print("Humidity");

Serial.print(h);

Serial.print("Temperature");

Serial.print(t);
Serial.print(f);

Serial.print("Heat Index:");

Serial.print(h:);

Serial.println("f");
}
