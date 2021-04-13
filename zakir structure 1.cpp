#include<stdio.h>
struct book
{
    int id;
    char name;
};
int main()
{
    struct book mybook;
    mybook.id=3;
    mybook.name='C';
    printf("Book ID:%d\n",mybook.id);
    printf("Book Name:%c",mybook.name);
    return 0;
}
