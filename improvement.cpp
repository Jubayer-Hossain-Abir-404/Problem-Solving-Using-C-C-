#include<stdio.h>
#include<math.h>
int main()
{
    float total1[100];
    float total2[100];
    int i,j,k,n;
    int c=0;
    printf("The value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Term 1 numbers are:");
        scanf("%f",&total1[i]);
    }
    for(j=0;j<n;j++)
    {
        printf("Term 2 numbers are:");
        scanf("%f",&total2[j]);
    }
    for(k=0;k<n;k++)
    {
        if(total2[k]>total1[k])
        {
            c++;
        }
    }
    printf("The number of students improved in term 2:%d",c);
    return 0;

}
