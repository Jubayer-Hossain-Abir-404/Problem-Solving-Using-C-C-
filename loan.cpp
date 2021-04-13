#include<stdio.h>
#include<math.h>
int main()
{
    int loan1,loan2,loan3,Sanctioned_loan,sum,Max_loan;
    printf("The loans are:");
    scanf("%d%d%d",&loan1,&loan2,&loan3);
    printf("The max loan is:");
    scanf("%d",&Max_loan);
    sum=loan2+loan3;
    if(loan1>0&&loan2>0)
    {
        loan3=0;
        printf("The sanctioned loan:%d",loan3);
    }
    else if(loan1==0&&loan2>0)
    {
        if(sum>Max_loan)
        {
            Sanctioned_loan=Max_loan-loan2;
            printf("The sanctioned loan:%d",Sanctioned_loan);
        }
    }
    else
    {
        printf("The sanctioned loan:%d",loan3);
    }
    return 0;
}
