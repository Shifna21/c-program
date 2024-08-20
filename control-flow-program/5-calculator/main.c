/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("enter the 1st number:");
    scanf("%d",&a);
    printf("enter the 2nd number:");
    scanf("%d",&b);
    printf("choose option : \n 1.addition\n 2.substraction\n 3.multiply\n 4.division\n");
    scanf("%d",&c);
    if(c==1)
    {
        d=a+b;
        printf("%d+%d=%d",a,b,d);
    }
    else if(c==2)
    {
        d=a-b;
        printf("%d-%d=%d",a,b,d);
    }
    else if(c==3)
    {
        d=a*b;
        printf("%d*%d=%d",a,b,d);
    }
    else if(c==4)
    {
        if(b==0)
        {
            printf("divise can't be zero");
        }
        else
        {
        d=a/b;
        printf("%d/%d=%d",a,b,d);
        }
    }


    return 0;
}
