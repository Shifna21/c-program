#include <stdio.h>
int leap();
int main()
{
     int result;
     result=leap();
     if(result==1)
     {
         printf("leap year");
     }
     else
     {
         printf("not a leap year");
     }
}

   int leap(){
        int a;
        printf("enter a year:");
        scanf("%d",&a);
        if(a%4==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
   }