#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int x, index_no;
    scanf("%d",&x);
    for (int i = 0; i < n; i++)
    {
        if (x==a[i])
        {
            index_no = i;
            break;
        }
        else
        {
            index_no = -1;
        }
    }
    printf("%d", index_no);
    return 0;
}