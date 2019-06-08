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
    int c, state, char_count;

    //set the charater count variable to 0 pre program start.
    //this is incrememnted every time the main while goes around and remains
    //IN a word.
    char_count = 0;

    //initialize all elements to zero. (missing assignments get 0 by default)
    //after the main while gets OUT of a word the current `char_count' becomes
    //an index to increment 
    //note that hist goes up to 50. so if we get a longer than 50 char word...
    //i guess we should test for that...
    int hist[50] = { 0 };

//TODO: test for words longer than 50 chars
//TODO: use a linked list instead? 

    //set the `state' to OUT. i.e. out of a word
    state = OUT;
    while ((c = getchar()) != EOF) 
    {
        if (c == ' ' || c == '\n' || c == '\t') 
        {
            if (state==IN) 
            {
                hist[char_count]++;
                char_count = 0;  
            }
            state = OUT;
        } 
        else if (state == OUT) 
        {
            state = IN;
            char_count = 1;
        } 
        else 
        {
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
            printf("%c ", screen[i][j]);
        }
        printf("\n");
    }
    printf("0 1 2 3 4 5 6 7 8 9 1 1 1 1 1 1 1 1 1 1 \
2 2 2 2 2 2 2 2 2 2 3 3 3 3 3 3 3 3 3 3 \
4 4 4 4 4 4 4 4 4 4\n");
    printf("                    0 1 2 3 4 5 6 7 8 9 \
0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 \
0 1 2 3 4 5 6 7 8 9\n"); 
}
