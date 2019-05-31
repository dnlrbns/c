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
	
	fahr = upper;
	printf("Fahrenheit | Celcius\n");
	printf("--------------------\n");
	while(fahr>=lower) {
		celcius = (5.0/9.0) * (fahr-32.0);
		printf("%10.0f | %7.1f\n", fahr, celcius);
		fahr = fahr - step;
	}
}