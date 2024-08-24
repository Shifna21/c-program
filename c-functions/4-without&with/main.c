#include <stdio.h>
int oddoreven();
void main()
{
    int a;
    a=oddoreven();
    if(a==1)
    {
     printf("is an even");   
    }
    else
    {
        printf("is an odd");
    }
}
int oddoreven()
{
    int b;
    printf("enter a num:");
    scanf("%d",&b);
    if(b%2==0)
    {
        return 1;
    }
    else
    {
       return 0;
    }
}