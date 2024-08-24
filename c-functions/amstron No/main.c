#include<stdio.h>
#include<math.h>
int armstrong();
void main()
{
     int result;
     result=armstrong();
     if(result==1)
     {
         printf("\narmstrong number");
     }
     else
     {
         printf("\nnot an armstrong number");
     }
}
      int armstrong()
      {
    int num,length,c,g=0,r,a,i,ans=0;
    printf("enter number:");
    scanf("%d",&num);
    c=num;
    while(c!=0){
    c=c/10;
    g++;
    }
    printf("number of digits = %d",g); 
    c=num;
    while (c!=0) {
        r=c%10;
        ans=ans+pow(r,g);
        c=c/10;
       }
    printf("\n%d",ans);
    if(ans!=num){
        return 0;
    }
        else{ 
            return 1;
        }
        
      }