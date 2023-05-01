#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s = n-1,k = 1;
    for (int j = 1; j <= (2*n)-1; j++)
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
        else
        {
            s++;
            k=k-2;
        }
        
    }
    
    return 0;
}