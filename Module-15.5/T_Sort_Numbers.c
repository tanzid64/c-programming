#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    int z[3] = {a,b,c};
    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if (z[i]>z[j])
            {
                int temp = z[i];
                z[i] = z[j];
                z[j] = temp;

            }  
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",z[i]);
    }
    printf("\n%d\n%d\n%d",a,b,c);
    
    return 0;
}