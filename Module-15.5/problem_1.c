#include<stdio.h>
#include<stdlib.h>
int my_abs(int a)
{
    int x = abs(a);
    return x;
}
int main()
{
    int a;
    scanf("%d",&a);
    int result = my_abs(a);
    printf("%d",result);
    return 0;
}