#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n;
    int c=0;
    float cgpa[100];
    float x[100];
    float maximum;
    printf("How many times:");
    scanf("%d",&n);
    printf("The cgpa's are:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&cgpa[i]);
    }
    for(j=0;j<n;j++)
    {
        if(cgpa[j]>2.5&&cgpa[j]<3.5)
        {
            x[c]=cgpa[j];
            c++;
        }
    }
    maximum=x[0];
    for(k=0;k<c;k++)
    {
        if(x[k]>maximum)
        {
            maximum=x[k];
        }
    }
    printf("The maximum cgpa:%.2f",maximum);
    return 0;

}
