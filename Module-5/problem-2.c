#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if (A<B<C || B%A==0)
    {
        printf("Multiples");
    }
    else
    {
        printf("No Multiples");
    }

    return 0;
}