#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int pos, lowest_number = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i]< lowest_number)
        {
            lowest_number = a[i];
            pos = i+1;
        }
        
    }
    
    printf("%d %d",lowest_number,pos);
    return 0;
}