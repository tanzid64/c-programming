#include<stdio.h>
// No Return Type + parameter Function
void sum(int x, int y)
{
    int z = x+y;
    printf("%d\n",z);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}