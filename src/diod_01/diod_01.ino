int ledPin = 13;
int timeDealay = 2000;

void setup()
{
	pinMode(ledPin, OUTPUT);
}

void loop()
{
	delay(timeDealay);
	digitalWrite(ledPin, HIGH);
	delay(timeDealay);
	digitalWrite(ledPin, LOW);
}
