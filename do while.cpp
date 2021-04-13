#define COLMAX 10
#define ROWMAX 12
#include<stdio.h>
#include<math.h>
int main()
{
    int row,column,y;
    row=1;

    printf(      " MULTIPLICATION TABLE\n"         );
    printf("----------------------------------------\n");
    do
    {
        column=1;
        do
        {
            y=row*column;
            printf("%d ",y);
            column=column+1;
        }
        while(column<=COLMAX);
        printf("\n");
        row=row+1;
    }
    while(row<=ROWMAX);
    printf("-------------------------------------------");
    return 0;
}
