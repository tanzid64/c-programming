#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s",a,b);
    int value = strcmp (a,b);
    if (value == 1)
    {
        printf("B choto\n");
    }
    else if (value == 0)
    {
        printf("same\n");
    }
    else if (value==-1)
    {
        printf("A choto\n");
    }
    
    return 0;
}