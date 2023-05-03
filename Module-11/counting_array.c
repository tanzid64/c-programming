#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    // Array Input
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&n);
    }
    //Counting
    int cnt[7]={0};
    for (int i = 0; i < n; i++)
    {
        cnt[a[i]]++;
    }
    //Printing
    for (int i = 0; i < 7; i++)
    {
        printf("%d - %d",i,cnt[i]);
    }
    
    return 0;
}