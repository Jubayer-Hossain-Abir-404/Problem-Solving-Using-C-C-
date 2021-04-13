#include<stdio.h>
#include<math.h>
int main()
{
    float cgpa[100];
    int i,j,k,n;
    int c=0;
    float maximum;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("The cgpa's are:");
        scanf("%f",&cgpa[i]);
    }
    maximum=cgpa[0];
    for(j=1; j<n; j++)
    {
        if(cgpa[j]>maximum)
        {
            maximum=cgpa[j];

        }
    }
    printf("Maximum:%.2f\n",maximum);
    for(k=0; k<n; k++)
    {
        if(maximum==cgpa[k])
        {
            c++;
        }
    }
    if(c==1)
    {
        printf("There are no repeated cgpa");
    }
    else if(c>1)
    {
        printf("The repeated maximum's are:%d\n",c);
        printf("The repeated maximum is:%.2f",maximum);
    }
    return 0;
}
