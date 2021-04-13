#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z;
    printf("What are the sides:");
    scanf("%d%d%d",&x,&y,&z);
    if(x+y>z&&y+z>x&&z+x>y)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}
