#include<stdio.h> 
void sum(int, int); 
void main() 
{ 
 int a,b,result; 
 printf("Enter two numbers:"); 
 scanf("%d %d",&a,&b); 
 sum(a,b); 
} 
 void sum(int a, int b) 
{ 
 printf("\nThe sum is %d",a+b); 
}