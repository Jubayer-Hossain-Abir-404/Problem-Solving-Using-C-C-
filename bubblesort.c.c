#include<stdio.h>
#include<math.h>
int bubblesort(int a[])
{
    int b[10]= {10,5,7,8,3,4,11,6,15,9},temp,i;
    for(i=0; i<10;i++)
    {
        for(i=0; i<9; i++)
        {
            if(b[i]>b[i+1])
            {
                temp=b[i];
                b[i]=b[i+1];
                b[i+1]=temp;
            }
        }
    }
    for(i=0; i<10; i++)
    {
        printf("%d\t",b[i]);


    }
    int main()
    {
        int k;
        int bubblesort(int a[k]);

    }
}
