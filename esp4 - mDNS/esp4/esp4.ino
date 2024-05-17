#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>

const char* ssid = "ssid";
const char* pass = "pass";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(10);
  Serial.print("\n");

  WiFi.begin(ssid, pass);
  Serial.print("Connecting to : "); Serial.println(ssid);

  int i = 0;
  while(WiFi.status() != WL_CONNECTED){
    delay(1000);
    Serial.print(++i); Serial.println(" ");
  }

  Serial.print("Connected to the network: ");Serial.println(WiFi.SSID());
  Serial.print("Now establishing DNS on the IP "); Serial.println(WiFi.localIP());
  
  if (!MDNS.begin("esp8266")) {
    Serial.println("Unable to establish DNS");
  }
  Serial.println("mDNS established.");

}

void loop() {
  // put your main code here, to run repeatedly:

}
