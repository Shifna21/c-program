/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
      if(arr[i]==key)
      {
          return i;
      }
    }
    return -1;
}
    
    int main()
    {
    int arr[]={4,7,9,8,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=9;
    int result=linearsearch(arr,n,key);
    if(result!=-1)
    {
        printf("element found at index:%d\n ",result);
    }
    else
    {
        printf("elements not found \n");
    }
    return 0;
    }