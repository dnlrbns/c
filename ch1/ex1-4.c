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
	
	celcius = lower;
	printf("Fahrenheit | Celcius\n");
	printf("--------------------\n");
	while(celcius<=upper) {
		fahr = (5.0/9.0) * (celcius-32.0);
		printf("%6.0f | %11.1f\n", celcius, fahr);
		celcius = celcius + step;
	}
}