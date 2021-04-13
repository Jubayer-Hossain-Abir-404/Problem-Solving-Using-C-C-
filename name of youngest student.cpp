#include<stdio.h>
#include<math.h>
#include<string.h>
struct student
{
    char name[30];
    int age;
};
void FindMinimum(student *d,int n);
int main()
{
    int i;
    struct student s[3];
    for(i=0; i<3; i++)
    {
        printf("Student No.%d's name:",i+1);
        scanf("%s",s[i].name);
        printf("Student No.%d's age:",i+1);
        scanf("%d",&s[i].age);
    }
    FindMinimum(s,3);
}
void FindMinimum(student *d,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(d[i].age>=13&&d[i].age<=19)
        {
            printf("%s\n",d[i].name);
        }
    }
    return;
}

