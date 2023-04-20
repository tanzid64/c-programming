#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int cnt_cap = 0, cnt_small = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]>='A' && s[i]<='Z')
        {
            cnt_cap++;
        }
        else
        {
            cnt_small++;
        }
        
    }
    printf("%d %d",cnt_cap,cnt_small);
    return 0;
}