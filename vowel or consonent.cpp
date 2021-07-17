#include<stdio.h>
#include<math.h>
int main()
{
    char x;
    printf("The character I choose:");
    scanf("%c",&x);
    if(x=='A'||x=='a'||x=='E'||x=='e'||x=='I'||x=='i'||x=='O'||x=='o'||x=='U'||x=='u')
    {
        printf("%c is a vowel",x);
    }
    else
    {
        printf("It's a consonant");
    }
    return 0;
}
