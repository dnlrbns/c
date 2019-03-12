#include <stdio.h>

// change all tabs characters to 4 spaces

int main (void)
{
    int c;
   
    int count = 0;

    int cbuf[3];
    
    for (int i = 0; i < 3; i++) {
        cbuf[i] = -1;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' && c == cbuf[0] && c == cbuf[1] && c == cbuf[2]){
            putchar('\t');    
        } else {
            putchar(c);
        }
        cbuf[count] = c;
        count++;
        if (count == 2)
        {
            count = 0;
        }
    }
}
