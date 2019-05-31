#include <stdio.h>

// change all tabs characters to 4 spaces

int main (void)
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t'){
            for (int i = 0; i < 4; i++) {
                putchar(' ');
            }
        } else {
            putchar(c);
        }
    }
}
