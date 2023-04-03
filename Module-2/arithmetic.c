#include<stdio.h>
int main()
{
    int a=10, b=20, sum, sub, mlt, dvd, mod;
    sum = a+b;
    sub = a-b;
    mlt = a*b;
    dvd = b/a;
    mod = b%3;
    printf("%d %d %d %d %d",sum,sub,mlt,dvd,mod);
    return 0;
}