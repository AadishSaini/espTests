#include <ESP8266WiFi.h>   

const char* ssid = "ssid";
const char* password = "pass";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(10);
  Serial.println("\n");
  WiFi.begin(ssid,  password);
  Serial.print("Connecting to :");
  Serial.print(ssid);
  Serial.println("...");

  int i = 0;
  while(WiFi.status() != WL_CONNECTED){
    delay(1000);
    Serial.print(++i); Serial.println(" ");
  }

  Serial.print("Connected to "); Serial.println(ssid); Serial.print("With IP Adrr: "); Serial.print(WiFi.localIP());


}

void loop() {
  // put your main code here, to run repeatedly:

}
