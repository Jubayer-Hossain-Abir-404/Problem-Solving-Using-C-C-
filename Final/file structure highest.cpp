#include<stdio.h>
#include<math.h>
#include<string.h>
struct student
{
    char name[20];
    int age;
    float cgpa;
};
void StudentInfo(student *d,int n,FILE *h);
int main()
{
    int i;
    struct student s[3];
    FILE *g,*h;
    g=fopen("stored information.txt","r");
    h=fopen("result.txt","a");
    for(i=0; i<3; i++)
    {
        printf("Student no.%d's name:\n",i+1);
        fscanf(g,"%s",s[i].name);
        printf("%s\n",s[i].name);
        printf("Student no.%d's age:\n",i+1);
        fscanf(g,"%d\n",&s[i].age);
        printf("%d\n",s[i].age);
        printf("Student no.%d's cgpa:\n",i+1);
        fscanf(g,"%f",&s[i].cgpa);
        printf("%.2f\n",s[i].cgpa);
    }
    StudentInfo(s,3,h);
}
void StudentInfo(student *d,int n,FILE *h)
{
    int i,p=0;
    float highest;
    highest=d[0].cgpa;
    for(i=0; i<n; i++)
    {
        if(d[i].cgpa>highest)
        {
            highest=d[i].cgpa;
            p=i;
        }
    }
    printf("Info of the Student who got highest cgpa:\n");
    fprintf(h,"\nName:%s\nAge:%d\nCgpa:%.2f\n",d[p].name,d[p].age,d[p].cgpa);
    printf("\nName:%s\nAge:%d\nCgpa:%.2f\n",d[p].name,d[p].age,d[p].cgpa);
    return;
}
