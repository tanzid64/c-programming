#include<stdio.h>
int main()
{
    int ar [5];
    //Array Input
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&ar[i]);
    }
    //Array Output
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",ar[i]);
    }
    
    printf("%d", ar[5]);
    return 0;
}