#include<stdio.h>
void func1(int *pNum)
{
    *pNum=5;
    return ;
}
int main()
{
    int num=1;
    printf("Before passing:%d\n",num);
    func1(&num);
    printf("After passing:%d\n",num);
    return 0;
}
