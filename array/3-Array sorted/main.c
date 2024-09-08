/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,a,ar[5]={8,9,10,17,6};
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(ar[j]>ar[i])
            {
                a=ar[i];
                ar[i] = ar[j]; 
                ar[j] =a;
            }
        }
    }
    printf("sorted element is:");
    for(i = 0; i<5; i++) 
    { 
        printf("%d\n",ar[i]); 
    }
    return 0;
}
