#include<stdio.h>
int main()
{
    int i,j,n=6,a=15;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
             {
                printf(" %d ",a);
                a--;
             }
                printf("\n");
    }
    return 0;
}
