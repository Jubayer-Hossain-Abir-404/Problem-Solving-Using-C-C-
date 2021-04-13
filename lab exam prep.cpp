#include<stdio.h>
#include<string.h>
int main()
{
   char x[20],y[20];
   int ret;
   printf("The first word:");
   gets(x);
   printf("The second word:");
   gets(y);
   ret=strcmp(x,y);
   if(ret<0)
   {
       printf("The %s word will appear before than %s word",x,y);
   }
   else if(ret>0)
   {
       printf("The %s word will appear after than %s word",x,y);
   }
   else
   {
       printf("The words are equal");
   }
   return 0;
}
