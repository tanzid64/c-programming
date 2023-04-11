#include<stdio.h>
int main()
{
    int n,m,k,z = 0,x;
    scanf("%d %d %d",&n,&m,&k);
    for (int i = 1; i <= n && i <= k && i <= m; i++)
    {
        ++z;
        --n;
        --k;
    }
    x = n/2;
    for (int j = 1; j <= x && j <= k; j++)
    {
        ++z;
    }
    
    printf("%d\n",z);
    return 0;
}