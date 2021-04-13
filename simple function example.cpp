#include<stdio.h>
void printline();
int main()
{
    printline();
    printf("\nIt is the programming\n");
    printline();
}
void printline(void)
{
    int i;
    for(i=1;i<23;i++)
    {
        printf("-");
    }
}
