#include <stdio.h>

int main() 
{
    int i,j,n1=4,on=1,n2=4,en=20;
    for (i=1;i<=n1;i++) 
    {
        for (j=1;j<=i;j++) 
        {
            printf("%d ", on);
            on+=2;
        }
        printf("\n");  
    }

    for (i=n2;i>0;i--)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d ", en);
            en-=2;  
        }
        printf("\n");
    }

    return 0;
}
