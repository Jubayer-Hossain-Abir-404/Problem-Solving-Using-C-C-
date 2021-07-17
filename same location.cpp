#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    char y[100];
    int m[10];
    int i,j,z,p,n;
    int c=0;
    printf("The first word:\n");
    scanf("%s",x);
    p=strlen(x);
    printf("The second word:\n");
    scanf("%s",y);
    n=strlen(y);
    for(i=0;i<p;i++)
    {
        if(x[i]==y[i])
        {
            z=i+1;
            m[c]=z;
            c++;
        }
    }
    printf("The number of location are same is %d\n",c);
    for(j=0;j<c;j++)
    {
        printf("In %d location the characters are same\n",m[j]);
    }
    return 0;
}

