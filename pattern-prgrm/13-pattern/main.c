#include <stdio.h>
int main()
{
    int i,j,n=7;
    char ch = 'A';  

    for (i=1;i<n;i++) 
    {
        for (j=1;j<=i;j++) 
        {
            printf("%c ", ch);
            ch++;  
            if (ch > 'Z') 
            { 
                ch = 'A';
            }
        }
        printf("\n");  
    }
    return 0;
}
