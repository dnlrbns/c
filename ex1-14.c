#include <stdio.h>

int main(void)
{
    int c;

    int char_cnt[127] = {0};

    while ((c = getchar()) != EOF)
    {
        char_cnt[c]++;
    }
    for (int i = 32; i < 127; i++)
    {
        printf("%c: ", i);
        printf("%d", char_cnt[i]);
        printf("\n");
    }

    return 0;
}
 //take a point to array and its length
 //return a pointer to an array tof the non zero values and there indexes
void selectArray(int *arr_p, int len)
{
    
}