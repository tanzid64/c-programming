#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if (tk>=7000)
    {
        printf("Cox's Bazar\n");
        if (tk>=5000)
        {
            printf("Saint Martin\n");
        }
       else 
       {
        printf ("return\n");
       } 
    }
    else
    {
        printf("Nothing");
    }

    return 0;
}