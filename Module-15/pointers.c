#include<stdio.h>
int main()
{
    int x =100;
    int * ptr = &x;
    // address of x
    printf("%p\n",&x);
    // value of ptr
    printf("%p\n",ptr);
    // address of ptr
    printf("%p\n",&ptr);
    return 0;
}