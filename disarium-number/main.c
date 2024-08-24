#include <stdio.h>
#include<math.h>
int main()
{
    int n,c=0,m,s=0;
    printf("enter a number:");
    scanf("%d",&n);
    m=n;
    while(m!=0)
    {
      m/=10;
      c++;
    }
    m=n;
    while(m!=0)
    {
      int r=m%10;
      s=s+pow(r,c);
      m/=10;
      c--;
    }
  if(n==s)
  {
    printf("disarium number");
  }
  else{
    printf("not disarium number");
  }
}