#include<stdio.h>
int main()
{
    //Array size input
    int n;
    scanf("%d",&n);

    //Aray Input
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ",&a[i]);
    }

    // sorting
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            // Comparing and swaping
            if (a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
    }
    //Array Output
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}