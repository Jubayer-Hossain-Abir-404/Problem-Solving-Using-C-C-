#include<stdio.h>
#include<math.h>
int main()
{
    int grade[100];
    int i,n;
    int sum=0;
    int counter=0;
    float average;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter person %d's grade:",i);
        scanf("%d",&grade[i]);
        if(grade[i]>100)
        {
            printf("The highest grade possible is 100\n");
            printf("Enter correct grade:");
            scanf("%d",&grade[i]);
        }
        sum=sum+grade[i];
        counter++;
    }
    average=sum/counter;
    printf("The average score is %.2f",average);
    return 0;
}
