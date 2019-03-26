#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 //outside a word

// count lines, words, and charaters in input

int main (void)
{
    int c, state;

    state = OUT;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
           if (state==IN) {
           putchar('\n');
           }
            state = OUT;
        } else if (state == OUT) {
            putchar(c);
            state = IN;
        } else {
            putchar(c);
        }
    }
}

