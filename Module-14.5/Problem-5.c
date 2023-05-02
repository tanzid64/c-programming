#include<stdio.h>
char capital_to_small(char c)
{
    char convert = c + 32;
    return convert;
}
int main()
{
    char c;
    scanf("%c",&c);
    char value = capital_to_small(c);
    printf("%c",value);
    return 0;
}