#include<stdio.h>
//Return type + Parameter Function
int sum(int x,int y)
{
    int sum = x+y;
    return sum;
}
int main()
{
    int z = sum(10, 20);
    printf("%d",z);
    return 0;
}