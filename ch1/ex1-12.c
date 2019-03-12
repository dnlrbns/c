#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 //outside a word

// count lines, words, and charaters in input

int main (void)
{
    int c, nl, nw, state;

    state = OUT;
    nl = nw = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
           state = OUT;
        } else if (state == OUT) {
            putchar('\n');
            state = IN;
        } else {
            putchar(c);
        }
    }
}

