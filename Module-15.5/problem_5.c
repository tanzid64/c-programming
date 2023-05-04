#include<stdio.h>
void swap_it(int * p,int * q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int * p = &x, *q = &y;
    swap_it(p,q);
    printf("%d %d",x,y);
    return 0;
}