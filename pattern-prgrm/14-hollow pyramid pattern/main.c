#include <stdio.h>
int main()
{
    int i,j,k,n=5;
    for (i = 1; i <=n; i++) 
    {
        for (j =n; j > i; j--) 
        {
            printf(" ");
        }

        for (k = 1; k <= (2 * i - 1); k++)
        {
            if (k == 1 || k == (2 * i - 1) || i ==n)
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
