#include<stdio.h>
#include<wiringPi.h>
int main(void) {
	printf("Hello Worlds New\n");
	int pin = 18;
	wiringPiSetupGpio();
	printf("Started");
	pinMode(pin, OUTPUT);
	
	for(;;)
	{
		digitalWrite(pin, HIGH);
		delay(1500);
		digitalWrite(pin, LOW);
		delay(1500);
		printf("Next Cycle");
	}
	return 0;
}

