#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,students_number,subject,marks;
    int total=0;
    int count=0;
    float average;
    printf("Students number:");
    scanf("%d",&students_number);
    for(i=1;i<=students_number;i++)
    {
        printf("Subjects:");
        scanf("%d",&subject);
        for(j=1;j<=subject;j++)
        {
            printf("Marks:");
            scanf("%d",&marks);
            if(marks>=60)
            {
                total=total+marks;
                 count++;
            }
            else
            {
                printf("Fail\n");
            }

        }
         average=(float)total/count;
            printf("The total marks is:%d\n",total);
            printf("The average is:%.2f\n",average);

    }
    return 0;
}
