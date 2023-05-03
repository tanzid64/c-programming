#include<stdio.h>
int main()
{
    double x = 5.26;
    double * ptr = &x;
    // address of x
    printf("%p\n",&x);
    // value of ptr
    printf("%p\n",ptr);
    // address of ptr
    printf("%p\n",&ptr);
    return 0;
}