// exercise 1-14
#include <stdio.h>

// define the display height and width in characters
#define HEIGHT 10

// ≥
int main(void)
{
    int c;

    int char_cnt[127] = {0};

    while ((c = getchar()) != EOF)
    {
        // check c is in range
        if (c < 0 || c > 127){
            printf("unexpected character in file: %c\n", c);
            break;
        }
        else{ 
            char_cnt[c]++;
        }
    }

    /*for (int i = 32; i < 127; i++)*/
    /*{*/
	/*printf("%c: ", i);*/
	/*printf("%d", char_cnt[i]);*/
	/*printf("\n");*/
    /*}*/

    return 0;
}
