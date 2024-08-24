#include <stdio.h>
int main()
 {
     int i,j,k,n=7;
    for (i = 1; i <=n; i++)
    {
        for ( j =n; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= (2* i - 1); k++) 
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i = 1; i <= 2; i++) 
    {  
        for (j = 1; j <n; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 3; k++)
        {  
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
