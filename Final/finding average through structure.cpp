#include<stdio.h>
#include<string.h>
#include<math.h>
struct student
{
    char name[30];
    int age;
    float cgpa;
};
float FindAverage(student *d,int n)
{
    int sum=0;
    int c=0;
    int i;
    float avg;
    for(i=0;i<n;i++)
    {
        if(d[i].age>=13&&d[i].age<=19)
        {
            sum=sum+d[i].cgpa;
            c++;
        }
    }
    avg=sum/(float)c;
    return avg;
}
int main()
{
    int i;
    float avg;
    struct student s[3];
    for(i=0;i<3;i++)
    {
        printf("Student No.%d's name:",i+1);
        scanf("%s",s[i].name);
        printf("Student No.%d's age:",i+1);
        scanf("%d",&s[i].age);
        printf("Student No.%d's cgpa:",i+1);
        scanf("%f",&s[i].cgpa);
    }
    avg=FindAverage(s,3);
    printf("Average:%.2f",avg);
    return 0;
}
