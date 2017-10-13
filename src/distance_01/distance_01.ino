int trigPin = 13;
int echoPin = 12;
int led = 11;

void setup() {
	pinMode(trigPin, OUTPUT);
	pinMode(echoPin, INPUT);
	pinMode(led, OUTPUT);
}

void loop() {
	long duration, distance;
	
	digitalWrite(trigPin, LOW);
	delayMicroseconds(2);
	digitalWrite(trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(trigPin, LOW);
	
	duration = pulseIn(echoPin, HIGH);
	distance = (duration/2) / 29.1;

	blinkLed(distance);
} 

int blinkLed(long time)
{
	if(time < 6)
	{
		digitalWrite(led, LOW);
		return 0;
	}
	if(time < 12)
	{
		digitalWrite(led, LOW);
		delay(time);
		digitalWrite(led, HIGH);
		delay(time);
		return 0;
	}
	if(time < 50)
	{	
		digitalWrite(led, HIGH);
  	delay(time * 5);
  	digitalWrite(led, LOW);
  	delay(time * 5);
  	return 0;
	}
	digitalWrite(led, HIGH);
  delay(time * 6);
  digitalWrite(led, LOW);
  delay(time * 6);
  return 0;
}
