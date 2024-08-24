#include <stdio.h>
int main()
{
    int i,j,n=5;
    for (int i =n; i >= 1; i--) 
    {
        for (int j =n; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            if (k == 1 || k == (2 * i - 1) || i ==n)
            {
                printf("*");
            } else 
            {
                printf(" ");
            }
        }
        
        printf("\n");
    }
    return 0;
}
