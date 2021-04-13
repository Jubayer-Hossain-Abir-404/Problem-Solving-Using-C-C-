#include<stdio.h>
#include<conio.h>
int main()
{
   int i,n,a[100];
   printf("How many terms to be displayed? : ");
   scanf("%d",&n);
   a[0]=0;a[1]=1;
   for(i=2;i<n;i++)
      a[i]=a[i-1]+a[i-2];

   printf("First %d Terms of fibonacci series \n",n);
   for(i=0;i<n;i++)
       printf(" %d ",a[i]);

return 0;
}
