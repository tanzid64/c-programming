#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int a[n];
    int cnt[n],f_x=0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&a[i]);
        cnt[i]=0;
        while(a[i]%2==0)
        {
            cnt[i]++;
            a[i]/=2;
        }
        if (cnt[i]>f_x)
        {
            f_x = cnt[i];
        }
        
    }
    //Printing output
    printf("%d",f_x);
    return 0;
}