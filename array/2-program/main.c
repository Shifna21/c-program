/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,a,array[100];
    printf("enter the size of array:");
    scanf("%d",&a);
    printf("enter the element:");
    for(i=0;i<a;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nthe array is:");
    for(i=0;i<a;i++)
    {
        printf(" %d ",array[i]);
    }

    return 0;
}
