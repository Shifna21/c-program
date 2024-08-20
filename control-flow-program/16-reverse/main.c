#include <stdio.h>

int main()
{
    int num,a,b,i;
    printf("enter number:");
    scanf("%d",&num);
    while(num>0){
    a=num%10;
    b=b*10+a;
    num=num/10;
    }
    printf("reverse:%d",b);
    
    return 0;
}