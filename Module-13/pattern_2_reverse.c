#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s = 0, k = 2*n-1;
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= s; i++)
        {
            printf(" ");
        }
        for (int i = 1; i <= k; i++)
        {
            printf("*");
        }
        s++;
        k=k-2;
        printf("\n");
    }
    
    return 0;
}