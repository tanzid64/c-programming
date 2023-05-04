#include<stdio.h>
void prt(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d",i);
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    prt(n);
    return 0;
}