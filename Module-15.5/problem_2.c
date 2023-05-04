#include<stdio.h>
int my_len(char s[])
{
    int len = 0;
    while (s[len]!='\0')
    {
        len++;
    }
    return len;
}
int main()
{
    char s[1000001];
    scanf("%s",s);
    int length = my_len(s);
    printf("%d",length);
    return 0;
}