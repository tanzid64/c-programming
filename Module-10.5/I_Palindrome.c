#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",&s);
    int len = strlen(s);
    int i = 0, j = len-1,p;
    while (i<j)
    {
        if (s[i]!=s[j])
        {
            p=0;
            break;
        }
        i++;
        j--; 
    }
    if (p!=0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}