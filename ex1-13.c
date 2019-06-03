#include <stdio.h>
#include <stdint.h>

#define IN 1 // inside a word
#define OUT 0 //outside a word
#define WIDTH 60
#define HEIGHT 50

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
    
    uint8_t screen[HEIGHT][WIDTH] = { 0 }; 
    
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            screen[i][j] = 32;
        }
    }

    for (int i = 0; i < 50; i++) {
        if (hist[i]>0)
        {
            //printf("%02d:%03d ",i,hist[i]);
            for (int j = 0; j<hist[i];j++)
            {
                screen[i][j] = 35;
            }
        }
    }
    for (int j = WIDTH-1; j > -1;j--)
    {
        for (int i = 0; i < HEIGHT; i++)
        {
            printf("%c", screen[i][j]);
        }
        printf("\n");
    }

}

