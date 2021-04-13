#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,students_number,subject;
    int total=0;
    int count=0;
    float average,marks;
    printf("Number of students:");
    scanf("%d",&students_number);
    for(i=1; i<=students_number; i++)
    {
        printf("Number of subject:");
        scanf("%d",&subject);
        for(j=1; j<=subject; j++)
        {
            printf("The marks are:");
            scanf("%f",&marks);
            if(marks>=60)
            {
                printf("Pass\n");
                total=total+marks;
                count++;
            }
            else
            {
                printf("Fail\n");
            }
        }
        average=(float)total/count;
        printf("The total marks are:%d\n",total);
        printf("The average is:%.2f\n",average);
        if(count<subject)
        {
            printf("This student has Failed\n");
        }
        total=0;
        count=0;
    }
    return 0;

}
