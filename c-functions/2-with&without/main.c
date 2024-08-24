#include <stdio.h>
void oddoreven(int);
int main()
{
   int a;
   printf("enter a num:");
   scanf("%d",&a);
   oddoreven(a);
   return 0;
}
void oddoreven(int b)
{
    if(b%2==0)
    {
        printf("%d is an even",b);
    }
    else
    {
        printf("%d is an odd",b);
    }
    
}