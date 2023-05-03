#include<stdio.h>
#include<string.h>
int main()
{
    char a[18];
    gets(a);//fgets(a,18,stdin);
    //fgets(a,size,stdin);

    printf("%s",a);
    return 0;
}