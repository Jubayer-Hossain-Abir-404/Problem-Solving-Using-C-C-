#include<stdio.h>
int main()
{
    char letter;
    printf("Enter any small letter:");
    scanf("%c",&letter);
    if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'){
        printf("   VOWEL");
    }
    else{
        printf("   CONSONENT");
    }
    return 0;
}
