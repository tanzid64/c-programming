#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n+1];
    for (int i = 0; i < n+1; i++)
    {
        a[i]=i;
    }
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j < n+1; j++)
        {
            printf("%d ",a[j]);
        }
        printf("\n");   
    }
    
    return 0;
}