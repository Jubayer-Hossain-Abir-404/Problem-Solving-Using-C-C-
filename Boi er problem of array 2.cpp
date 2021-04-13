#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int i,j,k,car;
    int frequency[5][5]= {{0},{0},{0},{0},{0}};
    char city;
    printf("For each person enter the city code\n");
    printf("followed by the car code\n");
    printf("Enter the letter x to indicate end\n");
    for(i=1; i<100; i++)
    {
        scanf("%c",&city);
        if(city=='x')
        {
            break;
        }
        scanf("%d",&car);
        switch(city)
        {
        case 'B':
            frequency[1][car]++;
            break;
        case 'C':
            frequency[2][car]++;
            break;
        case 'D':
            frequency[3][car]++;
            break;
        case 'M':
            frequency[4][car]++;
            break;
        }
    }
    printf("\n\n");
    printf("POPULARITY TABLE\n\n");
    printf("_____________________________________\n");
    printf("City Ambassador Fiat Dolphin Maruti \n");
    printf("_____________________________________\n");
    for(j=1; j<=4; j++)
    {
        switch(j)
        {
        case 1:
            printf("Bombay    ");
            break;
        case 2:
            printf("Calcutta  ");
            break;
        case 3:
            printf("Delhi     ");
            break;
        case 4:
            printf("Madras    ");
            break;

        }
        for(k=1; k<=4; k++)
        {
            printf("%7d",frequency[j][k]);
            printf("\n");
        }
    }
    printf("____________________________________\n");
    return 0;

}
