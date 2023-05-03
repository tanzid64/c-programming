#include<stdio.h>
int main()
{
    char a[5];
    //Input
    for (int i = 0; i < 5; i++)
    {
        scanf("%c",&a[i]);
    }
    //Output
    for (int i = 0; i < 5; i++)
    {
        printf("%c ",a[i]);
    }
    //size of arry
    printf("%d",sizeof(a));
    return 0;
}