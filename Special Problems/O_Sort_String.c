#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d", &n);
    int cnt[26] = {0};
 
    while (n--)
    {
        char ch;
        scanf(" %c", &ch);
        cnt[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        while (cnt[i]!=0)
        {
            printf("%c",i+97);
            cnt[i]--;
        }
    }
    return 0;
}