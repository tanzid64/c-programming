#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    scanf("lf",&x);
    int ans = ceil(x);
    int y= floor(x);
    printf("%d %d",ans,y);
    return 0;
}