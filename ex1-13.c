#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 //outside a word

// count the length of words and print a histogram of
// word length frequeny
int main (void)
{
    int c, state;

    state = OUT;

    //initialize all elements to zero. (missing assignments get 0 by default)
    int hist[50] = { 0 };

    int char_count = 0;

    while ((c = getchar()) != EOF) 
    {
        if (c == ' ' || c == '\n' || c == '\t') 
        {
            if (state==IN) 
            {
                hist[char_count]++;
                char_count = 0;  
                //            putchar('\n');

            }
            state = OUT;
        } 
        else if (state == OUT) 
        {
            //          putchar(c);
            state = IN;
            char_count = 1;
        } 
        else 
        {
            //            putchar(c);
            char_count++;
        }
    }
    for (int i = 0; i <50; i++) {
        if (hist[i]>0)
        {
            printf("%02d:%03d ",i,hist[i]);
            for (int j = 0; j<hist[i];j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}

