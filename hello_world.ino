#define LED_PIN 13

void setup()
{
	pinMode(LED_PIN, OUTPUT);
	Serial.begin(9600);
}

void loop()
{
	Serial.println("Hello World");
	delay(1000);
	digitalWrite(LED_PIN, HIGH);
	delay(100);
	digitalWrite(LED_PIN, LOW);
	delay(900);
}
