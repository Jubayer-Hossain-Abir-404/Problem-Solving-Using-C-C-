#include<stdio.h>
int main()
{
    int Grade;
    printf("How much number did you get in Math?:");
    scanf("%d",&Grade);
    if(Grade<=100&&Grade>=80)
    {


    printf("A+");
    }
    else if(Grade<=79&&Grade>=70){
    printf("A");
    }
    else if(Grade<=69&&Grade>=60){
    printf("A-");
    }
    else if(Grade<=59&&Grade>=50){
    printf("B");
    }
    else if(Grade<=49&&Grade>=40){
    printf("C");
    }
    else if(Grade<=39&&Grade>=33){
    printf("D");
    }
    else if(Grade<=32&&Grade>=0){
    printf("F");
    }
    else{
        printf("Invalid Input");
    }
    return 0;

}
