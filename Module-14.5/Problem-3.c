#include<stdio.h>
int ascii (char x)
{
    return (int) x;
}
int main()
{
    char x;
    scanf("%c",&x);
    int value = ascii(x);
    printf("%d",value);
    return 0;
}