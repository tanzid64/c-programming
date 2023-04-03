#include<stdio.h>
int main()
{
    int x = 5, y = 2, sum, sub,mlt;
    sum = x+y;
    sub = x-y;
    mlt = x*y;
    float div = (x*1.0)/y;
    printf("Summation = %d,\nSubtraction = %d,\nMultiplication = %d,\nDivision = %.2f",sum,sub,mlt,div);
    return 0;
}