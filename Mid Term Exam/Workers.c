#include<stdio.h>
int main()
{
    int m1, m2, d;
    scanf("%d %d %d",&m1,&m2,&d);
    int required_days = (d*m1)/m2;
    printf("%d",required_days);
    return 0;
}