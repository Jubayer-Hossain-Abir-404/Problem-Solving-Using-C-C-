#include<stdio.h>
int main()
{
    float GPA;
    printf("What is your GPA in S.S.C. exam?:");
    scanf("%f",& GPA);
    if(GPA==5.00)
    {
        printf("You can apply for this college");
    }
    else{
        printf("Sorry!You can not apply for this college");
    }
    return 0;
}
