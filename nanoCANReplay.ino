unsigned long time;
void setup() {
	// put your setup code here, to run once:
	Serial.begin(115200);
}

unsigned long previousMicros = micros();
void loop() {
	// put your main code here, to run repeatedly:
	unsigned long now = micros();
	if ((previousMicros + 1000000) < now + 4)
	{
		Serial.print("Time: ");
		time = micros();

		Serial.println(time);  //prints time since program started
		previousMicros = now;
	}
}
