#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if (tk>=100)
    {
        printf("Burger");
    }
    else if (tk>=50)
    {
        printf("Fuchka");
    }
    else if (tk>=20)
    {
        printf("ice-cream");
    }
    else
    {
        printf("Nothing");
    }

    return 0;
}