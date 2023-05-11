#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    fgets(s,1001,stdin);
    int a[3]={0};
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]>='A' && s[i]<='Z')
        {
            a[0]++;
        }
        else if (s[i]>='a' && s[i]<='z')
        {
            a[1]++;
        }
        else if (s[i]==' ')
        {
            a[2]++;
        }
        
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d",a[0],a[1],a[2]);
    return 0;
}