#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n, m=(n/2)+1;
    //Printing
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            //Back Slash
            if (i==j && i!=m)
            {
                printf("\\");
            }
            //Middle X
            else if (i==j && i==m)
            {
                printf("X");
            }
            //Back Slash
            else if (i+j==n+1 && i!=m)
            {
                printf("/");
            }
            //Star
            else
            {
                printf("*");
            }
        }
        //Line Gap
        printf("\n"); 
    }
    
    return 0;
}