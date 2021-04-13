#include<stdio.h>

int main ()
{
 int a[4][4], b[4][4],i,j;

 for(i=0;i<4;i++)
 {
     for(j=0;j<4;j++)
     {
         scanf("%d", &a[i][j]);
     }
 }

 for(i=0;i<4;i++)
 {
     for(j=0;j<4;j++)
     {
         scanf("%d", &b[i][j]);
     }
 }

 int k, max =0, total =0, c[4][4];

 for(k=0;k<4;k++){

 for(i=0;i<4;i++)
 {
     total =0;
     for(j=0;j<4;j++)
     {
         c[i][j] = a[k][j] * b[j][i];
         total += c[i][j];
     }
     if(total > max)
        max = total;
 }
 }

 printf("\nMaximum element in the array is %d", max);

 return 0;
}
