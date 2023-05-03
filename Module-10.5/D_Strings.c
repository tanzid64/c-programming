#include<stdio.h>
#include<string.h>
int main()
{
    char a[11], b[11];
    scanf("%s\n%s",&a,&b);
    int lena = strlen(a), lenb = strlen(b);
    printf("%d %d\n%s%s\n",lena,lenb,a,b);
    int temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s",a,b);
    return 0;
}