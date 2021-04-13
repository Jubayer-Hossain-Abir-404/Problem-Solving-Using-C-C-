#define MAXGIRLS 4
#define MAXITEMS 3
#include<stdio.h>
#include<math.h>
int main()
{
    int value[MAXGIRLS][MAXITEMS];
    int girl_total[MAXGIRLS];
    int item_total[MAXITEMS];
    int i,j,k,l,m,n,p,grand_total;
    printf("Enter values one at a time:\n");
    for(i=0;i<MAXGIRLS;i++)
    {
        girl_total[i]=0;
        for(j=0;j<MAXITEMS;j++)
        {
            scanf("%d",&value[i][j]);
            girl_total[i]=girl_total[i]+value[i][j];
        }
    }
    for(l=0;l<MAXITEMS;l++)
    {
        item_total[l]=0;
        for(k=0;k<MAXGIRLS;k++)
        {
            item_total[l]=item_total[l]+value[k][l];
        }
    }
    grand_total=0;
    for(m=0;m<MAXGIRLS;m++)
    {
        grand_total=grand_total+girl_total[m];
    }
    printf("\nGirl Totals:\n");
    for(n=0;n<MAXGIRLS;n++)
    {
        printf("Salesgirl[%d]=%d\n",n+1,girl_total[n]);
    }
    printf("\nItem Totals:\n");
    for(p=0;p<MAXITEMS;p++)
    {
        printf("Item[%d]=%d\n",p+1,item_total[p]);
    }
    printf("\nGrand Total=%d",grand_total);
    return 0;
}
