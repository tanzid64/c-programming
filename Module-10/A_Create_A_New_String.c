#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001],t[1001];
    scanf("%s\n%s",&s,&t);
    int length_of_s = strlen(s), length_of_t = strlen(t);
    printf("%d %d\n",length_of_s,length_of_t);
    printf("%s %s",s,t);
    return 0;
}