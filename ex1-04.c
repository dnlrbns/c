#include <stdio.h>

/* The following program converts a hard coded listing of fahrenheit termperature values to the Celcius equiv*/

/* The example is the `float' iteration from C Programming and uses floats for storing*/

int main(void)
{
	float fahr, celcius;
	int lower, upper, step;
	
	lower = -50;
	upper = 150;
	step = 10;
	
	celcius = lower;
	printf("Celcius | Fahrenheit\n");
	printf("--------------------\n");
	while(celcius<=upper) {
		fahr = celcius*1.8 +32;
		printf("%6.0f | %11.1f\n", celcius, fahr);
		celcius = celcius + step;
	}
}