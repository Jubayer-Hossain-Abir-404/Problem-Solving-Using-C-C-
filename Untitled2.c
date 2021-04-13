#include<stdio.h>
#include<stdlib.h>

int main()
{
    int grade[10], i, sum=0;
    float avg;
    for(i=1; i<11; i++)
    {

        printf("\nEnter person %d's Grade:", i);
        scanf("%d", &grade[i]);
        if(grade[i]>100)
        {
            printf("\nThe Highest grade possible is 100\n");
            printf("\nEnter Correct grade:");
            scanf("%d", &grade[i]);
        }
        sum=sum+grade[i];
        avg=sum/10;
    }
    printf("\nThe average score is: %.2f", avg);
    return 0;
}
