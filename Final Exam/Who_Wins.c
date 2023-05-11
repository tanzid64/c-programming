#include<stdio.h>
int main()
{
    int n,x1,x2,t=0,p=0;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d",&x1,&x2);
        if (x1>x2)
        {
            t=t+1;
        }
        else if (x1<x2)
        {
            p=p+1;
        }
    }
    if (t>p)
    {
        printf("Tiger");
    }
    else if (t<p)
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }
    
    return 0;
}