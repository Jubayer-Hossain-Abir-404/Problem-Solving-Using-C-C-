#include<stdio.h>
void rectangle(int a,int b,int *area,int *perimeter)
{
    *area=a*b;
    *perimeter=2*(a+b);
    return;
}
int main()
{
    int x,y;
    int area;
    int perimeter;
    printf("Enter two values:");
    scanf("%d%d",&x,&y);
    rectangle(x,y,&area,&perimeter);
    printf("Area is %d Perimeter is %d",area,perimeter);
    return 0;
}
