#include<ESP8266WiFi.h>
char *ssid = "Din Skinlab";
char *pass = "12345678";
IPAddress ip(192,168,1,1);
IPAddress gateway(192,168,1,1);
IPAddress subnet(255,255,255,0);
void setup() {
  WiFi.disconnect();
  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(ip,gateway,subnet);
  WiFi.softAP(ssid,pass);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
