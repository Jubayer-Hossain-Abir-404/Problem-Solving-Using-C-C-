#include<stdio.h>
#include<string.h>
int main()
{
  char word[1000];
  int i;
  int a[100];
  int str;
  scanf("%s",word);
  for(i=0;i<100;i++)
  a[i]=0;
  for(i=0;i<strlen(str);i++)
  a[str[i]]++;
  for(i=0;i<100;i++)
  {
   if(a[i]!=0)
  printf("%c:%d",i,a[i]);
  }
  return 0;
}
