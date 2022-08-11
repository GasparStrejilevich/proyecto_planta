#include <DHT.h>
#include <DHT_U.h>
#define DHTpin 2
#define DHTTYPE DHT11
DHT dht (DHTpin,DHTTYPE);
void setup() {
Serial.begin(9600);
dht.begin();
}

void loop() {
 float t=dht.readTemperature();
 float h=dht.readHumidity();
 delay(10000);
 Serial.print("Humedad: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.print(" *C ");
}
