#include<stdio.h>
//No return + No parameter Function
void sum(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int z = a+b;
    printf("%d\n",z);
}
int main()
{
    sum();
    return 0;
}