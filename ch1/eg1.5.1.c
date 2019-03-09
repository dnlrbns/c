#include <stdio.h>

/*
verify that the expression 'getchar() != EOF' is 0 or 1
*/

int main(void)
{
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}