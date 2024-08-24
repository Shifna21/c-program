#include <stdio.h>

int main() 
{
    int i,j,n=2,r=5;  
    for (i = 1; i < r; i++) 
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", n);
            n+=2;
        }
        printf("\n");
    }

    return 0;
}
