#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    int y[100];
    int i,j,p;
    int c=0;
    int d=0;
    printf("The word:\n");
    scanf("%s",x);
    p=strlen(x);
    for(i=0;i<p;i++)
    {
        if(x[i]>='A'&&x[i]<='Z')
        {
            y[c]=x[i];
            c++;
        }
    }
    printf("The number of uppercase is %d\n",c);
    for(j=0;j<c;j++)
    {
        if(x[j]=='A'||x[j]=='E'||x[j]=='I'||x[j]=='O'||x[j]=='U')
        {
            d++;
        }
    }
    printf("The number of uppercase vowel is %d",d);
    return 0;

}
