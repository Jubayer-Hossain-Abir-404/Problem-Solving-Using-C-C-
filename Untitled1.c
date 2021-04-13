#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    float expenses[13];
    int count;
    for(count=1; count<13; count++)
    {
        printf("\nENter expenses for month %d:\n", count);
        scanf("%f", &expenses[count]);
    }
    for(count=1; count<13; count++)
    {
        printf("\nMonth %d= $%.2f\n", count, expenses[count]);

    }
    return 0;
    }

