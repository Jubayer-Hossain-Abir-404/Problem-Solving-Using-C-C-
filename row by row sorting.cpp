#include<stdio.h>
#include<math.h>
int main()
{
    int a[10][10];
    int i,j,k,l,b,c,d,e,f,g,n,swaped,swaped1,swaped2;
    printf("How many time:");
    scanf("%d",&n);
    printf("Enter the matrix:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(k=0; k<n; k++)
    {
        for(l=0; l<(n-1); l++)
        {
            if(a[k][l]>[k][l+1])
            {
                swaped=a[k][l];
                a[k][l]=a[k][l+1];
                a[k][l+1]=swaped;
            }
        }
        if(k==0)
        {
            break;
        }
    }
    for(b=0; b<n; b++)
    {
        if(b==0)
        {
            continue;
        }
        for(c=0; c<n-1; c++)
        {
            if(a[b][c]>a[b][c+1])
            {
                swaped1=a[b][c];
                a[b][c]=a[b][c+1];
                a[b][c+1]=swaped1;
            }
        }
        if(b==1)
        {
            break;
        }
    }
    for(d=0; d<n; d++)
    {
        if(d==0||d==1)
        {
            continue;
        }
        for(e=0; e<n-1; e++)
        {
            if(a[d][e]>a[d][e+1])
            {
                swaped2=a[d][e];
                a[d][e]=a[d][e+1];
                a[d][e+1]=swaped2;
            }
        }

    }
    printf("Row by row sorted:\n");
    for(f=0; f<n; f++)
    {
        for(g=0; g<n; g++)
        {
            printf("%d   ",a[f][g]);
        }
        printf("\n");
    }
    return 0;
}
