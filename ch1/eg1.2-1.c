#include <stdio.h>

int convF2Cint(int fahr);

int main(void)
{
    int upper = 250;
    int lower = -50;
    int step = 10;
    
    float fahr = lower;
    while(fahr <= upper){
    	printf("%f\n",convF2Cint(fahr));
         fahr = fahr + step;
    }
}
int convF2Cint(float fahr)
{
    float cel = 5 * (fahr-32) / 9;
    return cel;
}
// float convC2Fcv