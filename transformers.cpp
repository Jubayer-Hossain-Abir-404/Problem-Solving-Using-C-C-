#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    int c=0;
    float cgpa[100];
    float x[100];
    float maximum;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("The cgpa are:");
        scanf("%f",&cgpa[i]);
        if(cgpa[i]>2.5&&cgpa[i]<3.5)
        {
            x[c]=cgpa[i];
            c++;
        }

    }
    printf("Counted numbers are:%d\n",c);
    maximum=x[0];
    for(i=1;i<c;i++)
    {
        if(x[i]>maximum)
        {
            maximum=x[i];
        }
    }
    printf("The maximum one is:%.2f",maximum);
    return 0;
}
