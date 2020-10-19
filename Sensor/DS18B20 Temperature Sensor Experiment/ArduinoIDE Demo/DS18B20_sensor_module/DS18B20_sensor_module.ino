#include "OneWire.h"
#include "DallasTemperature.h"
#define ONE_WIRE_BUS 3            
OneWire oneWire(ONE_WIRE_BUS);    
DallasTemperature sensors(&oneWire);
 
void setup()
{
  Serial.begin(9600);            
  sensors.begin();                
}
 
void loop(void)
{ 
  sensors.requestTemperatures();  
  Serial.print("The temperature is:");         
  Serial.print(sensors.getTempCByIndex(0)); 
  Serial.println("℃");
  delay(200);
}
