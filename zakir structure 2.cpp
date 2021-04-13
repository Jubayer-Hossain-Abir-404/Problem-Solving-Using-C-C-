#include<stdio.h>
#include<string.h>
struct book
{
    int id;
    char name[80];
};
int main()
{
    book mybook;
    mybook.id=3;
    strcpy(mybook.name,"C Programing");
    printf("Book ID:%d\n",mybook.id);
    printf("Book Name:%s",mybook.name);
    return 0;
}
