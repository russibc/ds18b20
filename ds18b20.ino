#include <OneWire.h>
#include <DallasTemperature.h>

const int oneWireBus = 4;

OneWire oneWire(oneWireBus);
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(115200);
}

void loop() {

  sensors.requestTemperatures();
  float temperatureC = sensors.getTempCByIndex(0);
  Serial.print("Soil temperature: ");
  Serial.print(temperatureC);
  Serial.println("ºC");

  Serial.println("-------------");
  delay(1000);

}