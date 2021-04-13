#include<stdio.h>

int main() {
   int a[10][10], b[10][10], c[10][10], i, j, k, maximum;
   int sum = 0;
   printf("\nPress space while writing Rows.\n\nPress Enter in order to go to next column.\n");

   printf("\nEnter First Matrix (4X4) : \n");
   for (i=0;i<4;i++) {
      for (j=0;j<4;j++) {
         scanf("%d", &a[i][j]);
      }
   }

   printf("\nEnter Second Matrix (4X4): \n");
   for (i = 0;i<4; i++) {
      for (j = 0;j<4; j++) {
         scanf("%d", &b[i][j]);
      }
   }

   printf("\nThe First Matrix is: \n");
   for (i=0;i<4;i++) {
      for (j=0;j<4;j++) {
         printf(" %d ", a[i][j]);
      }
      printf("\n");
   }

   printf("The Second Matrix is : \n");
   for (i =0;i<4; i++) {
      for (j = 0;j<4;j++) {
         printf(" %d ", b[i][j]);
      }
      printf("\n");
   }
   for (i=0;i<=3; i++) {
      for (j =0;j<=3;j++) {
         sum = 0;
         for (k=0;k<=3;k++) {
            sum=sum + a[i][k] * b[k][j];
         }
         c[i][j] = sum;
      }
   }

   printf("\nMultiplication Of Two Matrix : \n");
   for (i=0; i<4; i++) {
      for (j=0; j<4; j++) {
         printf(" %d ", c[i][j]);
      }
      printf("\n");
   }
   maximum=c[0][0];
   for(i=1;i<4;i++)
   {
       for(j=1;j<4;j++)
   {
       if(maximum<c[i][j])
       {maximum=c[i][j];}
   }
   }
   printf("\n\n Maximum number= %d\n\n", maximum);


   return 0;
}
