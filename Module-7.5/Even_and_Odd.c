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
    int sum_of_even = 0, sum_of_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            sum_of_even = sum_of_even + a[i];
        }

        else
        {
            sum_of_odd = sum_of_odd + a[i];
        }
    }
    printf("%d %d",sum_of_even,sum_of_odd);
    return 0;
}