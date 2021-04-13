#define COLMAX 10
#define ROWMAX 12
#include<stdio.h>
#include<math.h>
int main()
{
    int row,column,y;
    row=1;
    column=1;
    printf("            MULTIPLICATION TABLE            \n");
    printf("---------------------------------------------\n");
    do
    {

        do
        {
            y=row*column;
            printf("%d ",y);
            column++;
        }
        while(column<=COLMAX);
            printf("\n");
        row++;
    }
    while(row<=ROWMAX);
    printf("-----------------------------------------------");
        return 0;
}
