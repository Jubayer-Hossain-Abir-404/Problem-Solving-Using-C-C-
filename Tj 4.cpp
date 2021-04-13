#include<stdio.h>
#include<math.h>
int main()
{
    int i,age;
    int count=0;
    int counter=0;
    for(i=1;i<=10;i++)
    {
        scanf("%d",&age);
            if(age>=18&&age<64)
            {
                count++;
            }
            else if(age>=65)
            {
                counter++;
            }

    }
    printf("%d people are voters\n",count);
    printf("%d people are senior citizens",counter);
    return 0;
}
