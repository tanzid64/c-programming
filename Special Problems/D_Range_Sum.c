#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        long long int a, b, d;

        scanf("%lld %lld", &a, &b);

        if (a > b)
        {
            d = a - (b - 1);
        }
        else
        {
            d = b - (a - 1);
        }

        long long int f = d * (b + a);

        printf("%lld\n", f / 2);     
    }

    return 0;
}