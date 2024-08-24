#include <stdio.h>
void prime();
int main(){
           
           prime();
           
}
 void prime(){
     int num,lmt,i,j;
    printf("enter the starting value:");
	scanf("%d",&num);
	printf("enter the limit:");
	scanf("%d",&lmt);
	for (i=num; i<=lmt; i++) {
		int flag=0;
		if (i==2) {
			printf("%d ",i);
		}
		for(j=2; j<=(i/2)+1; j++) {
			if(i%j==0) {
				flag++;

			}

		}
		if (flag==0) {
			printf("%d ",i);

		}


	}
 }