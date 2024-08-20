#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a is largest:%d",a);
    }
    if(b>a&&b>c)
    {
        printf("b is largest:%d",b);
    }
    if(c>a&&c>b)
    {
        printf("c is largest:%d",c);
    }
    if(a==b&&a==c)
    {
        printf("all are equal");
    }
    return 0;
}