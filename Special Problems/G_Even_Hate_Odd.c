#include<stdio.h>
#include<stdlib.h>
int main()
{
    int k;
    scanf("%d",&k);
    while (k--)
    {
        int n,even = 0, odd = 0;
        scanf("%d",&n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
            if (a[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
            
        }
        //Printing
        if (even==odd)
        {
            printf("0\n");

        }
        else if (n%2!=0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n",abs(even-odd)/2);
        }
        
    }
    return 0;
}