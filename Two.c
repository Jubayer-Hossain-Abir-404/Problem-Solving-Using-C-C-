#include<stdio.h>

int main()
{
    int arr[125];
    int i;

    for(i=0; i<125; i++)
    {
        arr[i]=0;
    }

    char ch[100];
    gets(ch);

    for(i=0; ch[i]!='\0'; i++)
    {
        if('0'<=ch[i] && ch[i]<='9')
        {
            arr[ch[i]]++;
        }
        else if('A'<=ch[i] && ch[i]<='Z')
        {
            arr[ch[i]]++;
        }
        else if('a'<=ch[i] && ch[i]<='z')
        {
            arr[ch[i]]++;
        }
    }

    int flag=0;
    for(i=0; ch[i]!='\0'; i++)
    {
        if('0'<=ch[i] && ch[i]<='9')
        {
            if(arr[ch[i]]>=2)
            {
                flag=1;
            }
        }
        else if('A'<=ch[i] && ch[i]<='Z')
        {
            if(arr[ch[i]]>=2)
            {
                flag=1;
            }
        }
        else if('a'<=ch[i] && ch[i]<='z')
        {
            if(arr[ch[i]]>=2)
            {
                flag=1;
            }
        }
    }

    if(flag==0)
    {
        printf("No repeated character.\n");
    }
    else
    {
        printf("Repeated Characters are:\n");
        /*for(i=0; ch[i]!='\0'; i++)
        {
            if('0'<=ch[i] && ch[i]<='9')
            {
                if(arr[ch[i]]>=2)
                {
                    printf("\t\t%c: %d times\n", ch[i], arr[ch[i]]);
                    arr[ch[i]]=0;
                }
            }
            else if('A'<=ch[i] && ch[i]<='Z')
            {
                if(arr[ch[i]]>=2)
                {
                    printf("\t\t%c: %d times\n", ch[i], arr[ch[i]]);
                    arr[ch[i]]=0;
                }
            }
            else if('a'<=ch[i] && ch[i]<='z')
            {
                if(arr[ch[i]]>=2)
                {
                    printf("\t\t%c: %d times\n", ch[i], arr[ch[i]]);
                    arr[ch[i]]=0;
                }
            }
        }*/

        for(i=0; i<125; i++)
        {
            if(arr[i]>=2)
            {
                printf("\t\t%c: %d times\n", i, arr[i]);
            }
        }
    }

    return 0;
}
