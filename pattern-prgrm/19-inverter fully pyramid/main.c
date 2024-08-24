#include <stdio.h>

int main()
{
    int i,j,k,n=5;
    for(i=n;i>=1;i--){

        for(j=0;j<n-i;j++){

                printf(" ");

            }
        for(k=1;k<=i;k++){
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}