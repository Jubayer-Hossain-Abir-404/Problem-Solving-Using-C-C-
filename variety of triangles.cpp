#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z;
    printf("What are the sides baby:");
    scanf("%d%d%d",&x,&y,&z);
    if((x==y&&z!=x)||(y==z&&x!=y)||(z==x&&y!=z))
    {
        printf("It's Samadibahu");
    }
    else if(x==y&&y==z)
    {
        printf("It's Equilateral");
    }
    else
    {
        printf("Bishomobahu");
    }
    return 0;
}
