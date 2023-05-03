#include<stdio.h>
#include<limits.h>
int main()
{
    //Input
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max = a[0] , min = a[0],max_index,min_index;
    //Finding max & min
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_index = i;
        }
        if (a[i]<min)
        {
            min = a[i];
            min_index = i;
        } 
    }
    //Replacing values
    int temp = a[max_index];
    a[max_index] = a[min_index];
    a[min_index] = temp;
    //Printing New Array 
    for (int i = 0; i <n; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}