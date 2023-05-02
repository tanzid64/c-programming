#include<stdio.h>
char small_to_capital(char c)
{
    char convert = c - 32;
    return convert;
}
int main()
{
    char c;
    scanf("%c",&c);
    char value = small_to_capital(c);
    printf("%c",value);
    return 0;
}