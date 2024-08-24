#include <stdio.h>
void oddoreven();
int main()
{
   oddoreven();
   return 0;
}
void oddoreven()
{
    int a;
    printf("enter a num:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is an even",a);
    }
    else
    {
        printf("%d is an odd",a);
    }
    
}