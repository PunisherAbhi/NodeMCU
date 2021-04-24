#include <Arduino.h>
#include <ESP8266WiFi.h>

void setup()
{
	// put your setup code here, to run once:
	pinMode(LED_BUILTIN, OUTPUT); // Initialize the LED_BUILTIN pin as an output
}

void loop()
{
	// put your main code here, to run repeatedly:
	digitalWrite(LED_BUILTIN, LOW);	 // Turn the LED on by making the voltage LOW
	delay(100);						 // Wait for a second
	digitalWrite(LED_BUILTIN, HIGH); // Turn the LED off by making the voltage HIGH
	delay(100);						 // Wait for one seconds
}