#include <stdio.h>
int oddoreven(int);
void main()
{
   int a,b;
   printf("enter a num:");
   scanf("%d",&a);
   b=oddoreven(a);
}
int oddoreven(int b)
{
    if(b%2==0)
    {
        printf("%d is an even",b);
    }
    else
    {
        printf("%d is an odd",b);
    }
    return b;
}