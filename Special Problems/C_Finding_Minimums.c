#include<stdio.h>
#include<limits.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    //Input
    int a[n],min = INT_MAX,counter = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    //Dividing & Printing
    for (int i = 0; i < n; i++)
    {
        if (min>a[i])
        {
            min=a[i];
            
        }
        
        counter=counter+1;
        if (counter==k || i==n-1)
        {
            printf("%d ",min);
            counter = 0;
            min=INT_MAX;
        }
    }
    return 0;
}