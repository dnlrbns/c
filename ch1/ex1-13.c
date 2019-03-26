#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 //outside a word

int main(void)
{
    int c, state, cnt;
    
    cnt = 0;
    
    state = OUT;
    
    int charcount[10];

    for(int i = 0; i<10; i++) {
        charcount[i] = 0;
//         printf("%d",charcount[i]);
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
           if (state==IN) {
               putchar('\n');
               charcount[cnt]++;
               cnt = 0;
           }
           state = OUT;
        } else if (state == OUT) {
            putchar(c);
            state = IN;
            cnt++;
        } else {
            putchar(c);
            cnt++;
        }
    }
    for(int i = 0; i<10; i++) {
        printf("%d",charcount[i]);
    }
}
