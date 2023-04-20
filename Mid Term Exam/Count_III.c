#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int cnt[26]={0};
    //Counting..
    for (int i = 0; i < strlen(s); i++)
    {
        cnt[s[i]-'a']++;
    }
    //Printing..
    for (int i = 'a'; i <= 'z'; i++)
    {
        printf("%c - %d\n",i,cnt[i-'a']);
    }
    
    return 0;
}