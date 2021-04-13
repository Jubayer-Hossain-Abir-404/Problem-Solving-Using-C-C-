#include<stdio.h>
#include<math.h>
int main()
{
    int choice;
    float num;
    printf("What is the fucking number:");
    scanf("%f",&num);
    printf("1:Feet to Meters,2:Meters to Feet.\n");
    printf("Enter choice:");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("%.2f",num/3.28);
    }
    else if(choice==2)
    {
        printf("%.2f",num*3.28);
    }
    return 0;

}
