#include <stdio.h>

/*
verify that the expression 'getchar() != EOF' is 0 or 1
*/

int main(void)
{
    printf("%d",(getchar() != EOF));
    printf("%d",(getchar() == EOF));
    printf("\n");
}