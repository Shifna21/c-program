#include<stdio.h>
void sum();
void main()
{
    printf("calculate the two numer");
    sum();
}
void sum()
{
    int a,b;
    printf("\nenter two number:");
    scanf("%d%d",&a,&b);
    printf("The sum is:%d",a+b);
}