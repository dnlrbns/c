#include <stdio.h>

/* Write a program to copy it's input to its output,
 * replacing each string of 1 or more blanks with a
 * single blank
 */
int main(void)
{
    int c;
    int prev_c = -1;

    while((c = getchar()) != EOF) {
        if(prev_c == ' ' && c ==' ') { }
        else {
            putchar(c);
        }
        prev_c = c;
    }
}
