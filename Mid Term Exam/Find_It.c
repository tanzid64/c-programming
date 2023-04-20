#include<stdio.h>
int main()
{
    int n, x, cnt = 0;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for (int i = 0; i < n; i++)
    {
        if (a[i]==x)
        {
            cnt++;
        } 
    }
    printf("%d",cnt);
    return 0;
}