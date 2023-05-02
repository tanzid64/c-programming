#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s = n-1,k = 1;
    for (int j = 1; j <= (2*n); j++)
    {
        for (int i = 1; i <= s; i++)
        {
            printf(" ");
        }
        for (int i = 1; i <= k; i++)
        {
            printf("*");
        }
        printf("\n");
        if (j<n)
        {
            s--;
            k=k+2;
        }
        else if (j==n)
        {
            s=0;
            k=(2*n)-1;
        }
        
        else
        {
            s++;
            k=k-2;
        }
        
    }
    
    return 0;
}