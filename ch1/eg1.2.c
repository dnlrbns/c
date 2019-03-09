#include <stdio.h>

/* The following program converts a hard coded listing of fahrenheit termperature values to the Celcius equiv*/

/* The example is the `float' iteration from C Programming and uses floats for storing*/

int main(void)
{
	float fahr, celcius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	while(fahr<=upper) {
		celcius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celcius);
		fahr = fahr + step;
	}
}