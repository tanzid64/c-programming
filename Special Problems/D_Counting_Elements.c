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
    //Sorting
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            } 
        }
    }
    //Counting
    int temp=a[0],counter=0,result=1;
    for (int i = 1; i < n; i++)
    {
            if (temp == a[i])
            {
                result++;
            }
            else if (temp+1 == a[i])
            {
                counter+=result;
                temp = a[i];
                result = 1;
            }
            else
            {
                result = 1;
                temp = a[i];
            }    
    }
    printf("%d",counter);
    return 0;
}