#include <stdio.h>

int main()
{
    int num,i,a=0,b=1,c;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("%d%d",a,b);
    for(i=0;i<=num;i++) 
    {
        c=a+b;
        if(c<=num)
        printf("\n%d",c);
        a=b;
        b=c;
    }
    return 0;
}
