#include<stdio.h>
int main()
{
    int n,s,k;
    scanf("%d",&n);
    s=n-1;
    k=1;
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= s; i++)
        {
            printf(" ");
        }
        for (int i = 1; i <= k; i++)
        {
            if (j%2 != 0)
            {
                printf("^");
            }
            else
            {
                printf("*");
            }
            
        }
        printf("\n");
        k=k+2;
        s--;
    }
    
    return 0;
}