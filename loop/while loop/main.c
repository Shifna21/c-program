#include <stdio.h>
int main()
{
    int num,sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    while(num!=-1){
     sum=sum+num;
     printf("enter a number:");
     scanf("%d",&num);
    }
    printf("sum is calculated:%d",sum);
    return 0;
}
