/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int num,a,b,mod,length,result=0;
    printf("enter the amstrong number:");
    scanf("%d",&num);
    a=num;
    while(a>0)
    {
      length++;
      a=a/10;
    }
  
    b=num;
    while(b!=0)
    {
       mod=b%10;
       result=result+pow(mod,length);
       b=b/10;
    }
    if(result==num)
    {
        printf("%d is an amstrong",num);
    }
    else
    {
        printf("%d is not an amstrong",num);
    }
    

    return 0;
}
