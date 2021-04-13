#include<stdio.h>
int main()
{
    int array[7]={-99,45,100,37,89,-327,245};
    int i;
    int max=0;
    for(i=0;i<7;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    printf("The maximum number is %d",max);
    return 0;
}
