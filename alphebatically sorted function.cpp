#include<stdio.h>
#include<string.h>
void sortname(char s[10][80],int n)
{
    char temp[80];
    int i,j,ret;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            ret=strcmp(s[i],s[j]);
            if(ret>0)
            {
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
            }
        }
    }
}
int main()
{
    char names[10][80];
    int i,n;
    printf("How many times:");
    scanf("%d",&n);
    printf("Enter %d names below:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%s",names[i]);
    }
    sortname(names,n);
    printf("Sorted names:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",names[i]);
    }
    return 0;
}
