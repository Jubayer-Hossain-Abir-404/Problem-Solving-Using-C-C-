#define FIRST 360
#define SECOND 240
#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i,j,roll_number,total,marks;
    printf("Enter number of students and subjects:");
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        printf("Enter Roll number:");
        scanf("%d",&roll_number);
        total=0;
        printf("Enter marks of %d subjects for Roll No %d:",m,roll_number);
        for(j=1;j<=m;j++)
        {
            scanf("%d",&marks);
            total=total+marks;
        }
        printf("TOTAL MARKS=%d\n",total);
        if(total>=FIRST)
        {
            printf("First Division\n");
        }
        else if(total>=SECOND)
        {
            printf("Second Division\n");
        }
        else
        {
            printf("Failed\n");
        }
    }
    return 0;
}
