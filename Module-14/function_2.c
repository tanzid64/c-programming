#include<stdio.h>
// Return Type + No parameter Function
int sum()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int z = a+b;
    return z;
}
int main()
{
    int z = sum();
    printf("%d",z);
    return 0;
}