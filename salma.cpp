#include<stdio.h>
int main()
{
    int mark[100],i,j,s=0;
    int n;
    FILE *g,*h;
    g=fopen("E:\\Software\\Adove\\data.txt","r");
    h=fopen("ans.txt","w");
    printf("how many numbers: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        fscanf(g,"%d",&mark[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",mark[i]);
    }
    for(j=0;j<n;j++)
    {
        s=s+mark[j];
    }
    fprintf(h,"Total Marks: %d",s);
    printf("Total marks: %d",s);
    return 0;
}
