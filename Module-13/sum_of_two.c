#include<stdio.h>
int main()
{
    int n,flag = 0,x;
    //Array size input
    scanf("%d",&n);
    int a[n];
    //Aray Input
    for (int i = 0; i < n; i++)
    {
        scanf("%d ",&a[i]);
    }
    // x Input
    scanf("%d",&x);
    // sum compare
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]+a[j]==x)
            {
                flag = 1;
            }  
        }
    }
    //Output
    if (flag==0)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }
    
    return 0;
}