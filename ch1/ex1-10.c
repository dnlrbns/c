#include <stdio.h>

// Write a program to copy its input to its output, replacing each
// tab by \t, each backspace by \b, and each backslash by \\. This make tabs
// and backspaces visible in an unambiguous way.


int main (void)
{
    int c;

    // for future handling of `space tab'
    // int c_linebuf[3];

    while ((c = getchar()) != EOF) {
       if (c == '\\') {
          printf("\\\\");
       } else if (c == '\t') {
          printf("TAB ");
       } else {
          putchar(c);
       }
    } 
}
