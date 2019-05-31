#include <stdio.h>

//count blanks \b tabs \t and newlines \n

int main(void)
{
	int c;
	
	int b = 0;
	int t = 0;
	int n = 0;

	while((c = getchar()) != EOF){
		if (c == '\n')
			n++;
	}
	printf("%d\n",n);
}
