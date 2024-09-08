#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[20];
    float mark;
}s[20];
int main()
{
    int size,i;
    printf("enter number of students:\n");
    scanf("%d",&size);
    printf("enter the details of student:\n");
    for(i=0;i<size;i++)
    {
        printf("id:");
        scanf("%d",&s[i].id);
        printf("name:");
        scanf("%s",s[i].name);
        printf("mark:");
        scanf("%f",&s[i].mark);
    }
    printf("students informations are:\n");
    for(i=0;i<size;i++)
    {
        printf("id:%d",s[i].id);
        printf("name:%s",s[i].name);
        printf("mark:%f",s[i].mark);
        printf("\n");
    }
}
