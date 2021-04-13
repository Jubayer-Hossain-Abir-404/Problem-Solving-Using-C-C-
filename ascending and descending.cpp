#include<stdio.h>
#include<math.h>
int main()
{
    int x[6];
    int y[6];
    int w[6];
    int i,j,k,a,b,n,l,m,maximum,minimum;
    int p=0;
    int q=0;
    printf("How many times:");
    scanf("%d",&n);
    printf("The elements are :\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
    maximum=x[0];
    for(j=0; j<n; j++)
    {
        for(k=0; k<n; k++)
        {
            if(x[k]>maximum)
            {
                maximum=x[k];
                p=k;
            }
        }
        y[j]=maximum;
        x[p]=-100;
        maximum=x[p];
    }
    minimum=x[0];
    for(l=0; l<n; l++)
    {
        for(m=0; m<n; m++)
        {
            if(x[m]>maximum)
            {
                maximum=x[m];
                q=m;
            }
        }
        w[l]=minimum;
        x[q]=1000000;
        minimum=x[q];
    }
    printf("The ascending order is:\n");
    for(a=0; a<n; a++)
    {
        printf("%d\n",y[a]);
    }
    printf("The descending order is:\n");
    for(b=0; b<n; a++)
    {
        printf("%d\n",w[b]);
    }
    return 0;
}
