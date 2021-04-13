#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,age;
    int count=0;
    int counter=0;
    printf("The following ages are:");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&age);
        for(j=1;j<=10;j++)
        {
            if(age>=18&&age<65)
            {
                count++;
            }
            else if(age>=65)
            {
                counter++;
            }
        }
    }
    printf("%d people are voters\n",count);
    printf("%d people are senior citizens",counter);

    return 0;
}
