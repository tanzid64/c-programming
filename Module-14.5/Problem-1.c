#include<stdio.h>
int main()
{
    int n, k = 1, s;
    scanf("%d",&n);
    s = n-1;
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
        printf("\n");
        s--;
        k++;
    }
    
    return 0;
}