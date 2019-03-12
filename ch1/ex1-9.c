#include <stdio.h>

/* Write a program to copy it's input to its output,
 * replacing each string of 1 or more blanks with a
 * single blank
 */
 int main(void)
{
	int c, prev_c;

	while((c = getchar()) != EOF) {
		if(c == ' ') {}
		else {
			putchar(c);
		}
	}
}
