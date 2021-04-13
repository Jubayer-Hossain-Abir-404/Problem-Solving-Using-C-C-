#include<stdio.h>
int main()
{
    int total_no,count;

    float number,average,sum=0;
    printf("How many numbers?");
    scanf("%d",&total_no);
    for(count=1;count<=total_no;count++)
    {
        printf("Enter the number %d:",count);
        scanf("%f",&number);
        sum=sum+number;

    }
    printf("The summation is :%.2f\n",sum);
    average=sum/total_no;
    printf("The following answer is :%.2f",average);
    return 0;
}
