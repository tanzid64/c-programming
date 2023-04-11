#include<stdio.h>
int main()
{
    char lowercase,a = 'a';
    scanf("%c",&lowercase);
    if (lowercase=='z')
    {
        printf("%c",a);
    }
    else
    {
        printf("%c",lowercase+1);
    }
    
    return 0;
}