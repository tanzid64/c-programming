#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],value;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        s[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]==0)
        {
            value = i-1;
            for (int j = 0; j <= value; j++)
            {
                int t = a[j];
                a[j] = a[value];
                a[value] = t;
                value--;
            }
        } 
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    return 0;
}