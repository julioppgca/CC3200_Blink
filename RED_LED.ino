// lib
#include <WiFi.h>
#include <BlynkSimpleTI_CC3200_LaunchXL.h>

// Wi-fi config
char ssid[]="skelter_wifi";
char pass[]="Criv0696";

// Auth Token
char auth[]="7e33346ec62d43a3bd8e11e8e9d34626"; 


void setup()
{
 Blynk.begin(auth, ssid, pass);
 
 pinMode(RED_LED, OUTPUT);
 digitalWrite(RED_LED, LOW); 
}

BLYNK_WRITE(V1)
{
int i = param.asInt();
if(i) digitalWrite(RED_LED, HIGH);
else if(!i) digitalWrite(RED_LED, LOW); 
}

void loop()
{
 Blynk.run(); 
}
