#include <stdio.h>

int main() {
    int i,j,n=5,k;
    for(i=1;i<=n;i++) 
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i-1;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=5;j>i;j--) 
        {
            printf(" ");
        }
        for(k=1;k<=i-1;k++) 
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}