#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int a[100], i, size, location, smallest ;
    printf("\nTotal number of elements in The array:\n");
    scanf("%d", &size);

    printf("\nEnter %d integers:", size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);

    }
    smallest=a[0];
    for(i=1; i<size; i++)
    {
        if(smallest>a[i])
        {
            smallest=a[i];
            location=a[i];
        }


    }
    printf("\n Smallest number: %d, Location: array[%d]", smallest, location );
    return 0;


}
