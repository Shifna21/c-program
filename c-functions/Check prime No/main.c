#include<stdio.h>
int prime();
int main(){
          
        int result;
        result=prime();
        if (result==1) 
        {
            printf("prime number");
        }
        else
        {
            printf("not a prime number");
        }
}
    int prime(){
        int isPrime=1,num;
        printf("enter a number:");
        scanf("%d",&num);
         if (num <= 1) {
        isPrime = 0;
    } else if (num % 2 == 0 && num != 2) {
        isPrime = 0;
    } else if (num % 3 == 0 && num != 3) {
        isPrime = 0;
    } else if (num % 5 == 0 && num!= 5) {
        isPrime = 0;
    } else if (num % 7 == 0 && num != 7) {
        isPrime = 0;
    } 
     if (isPrime) {
       return 1 ;
    } else {
        return 0;
    }
          

    }