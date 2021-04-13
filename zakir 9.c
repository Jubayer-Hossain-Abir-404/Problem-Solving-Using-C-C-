#include<stdio.h>
int main()
{
    char name[50];
    int id;
    float gpa;
    printf("Enter your name,id and gpa:\n");
    scanf("%s%d%f",&name,&id,&gpa);
    printf("Name:%s ID:%d GPA:%f\n",name,id,gpa);
    return 0;
}
