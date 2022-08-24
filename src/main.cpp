#define BLYNK_TEMPLATE_ID "INSIRA_SEU_ID"
#define BLYNK_DEVICE_NAME "portão"
#define BLYNK_AUTH_TOKEN "INSIRA_SEU_TOKEN"
#define BLYNK_PRINT Serial

#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>



char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "NOME_REDE";
char pass[] = "SENHA";


BLYNK_WRITE(V1) //FUNÇÃO PINO VIRTUAL
{
  int portao = 12; //D6
  pinMode(portao, OUTPUT);
  int pinValue = param.asInt(); //PINO VIRTUAL BLYNK
  Serial.println(pinValue);
   
  if(pinValue == 1){ digitalWrite(portao, HIGH);
                     delay (200); 
                     digitalWrite(portao, LOW);}
}


  
void setup()   {
 
 Serial.begin(9600);
 Blynk.begin(auth, ssid, pass);

 

}
 
void loop()
{

  Blynk.run();
     
}
