#include <stdio.h>

int main()
{
    int i,j,m=1,n=4;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++) 
        {
            printf("%d ",m);
            m+=2;
        }
        printf("\n");
    }

    return 0;
}
