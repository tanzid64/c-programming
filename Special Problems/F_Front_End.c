#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int f_index = 0, e_index = n-1;
    while (f_index<=e_index)
    {
        printf("%d ",a[f_index]);
        f_index++;
        if (f_index>e_index) break;
        printf("%d ",a[e_index]);
        e_index--;
    }
    return 0;
}