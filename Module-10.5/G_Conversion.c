#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    fgets(s,100001,stdin);
    for (int i = 0; i < 100001; i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
        else if (s[i]>=65 && s[i]<=90)
        {
            s[i] = s[i]+32;
        }
        else if (s[i]>=97 && s[i]<=122)
        {
            s[i] = s[i]-32;
        } 
        
    }
    printf("%s",s);
    return 0;
}