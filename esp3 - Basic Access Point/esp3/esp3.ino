#include <ESP8266WiFi.h>

const char* ssid = "aloo ka paratha wifi";
const char* password = "aadishaadish";

void setup() {
  Serial.begin(9600);
  delay(10);
  Serial.println("\n");

  WiFi.softAP(ssid, password);
  Serial.print("Access Point: ");
  Serial.print(ssid);
  Serial.println(" started");

  Serial.print("IP address:\t");
  Serial.println(WiFi.softAPIP());

}

void loop() {
  // put your main code here, to run repeatedly:

}
