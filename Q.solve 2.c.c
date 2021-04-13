
#include<stdio.h>
#include<string.h>
#define str_size 100
#define max_size 255
int main ()
{
    char str[str_size];
    char char_freq[max_size];
    int l,i, ascii, mox;
    gets(str);

    l = strlen(str);

     for(i=0;i<max_size;i++)
{
    char_freq[i] =0;
}
i=0;
while (str[i] != '\0')
{
    ascii = (int)str[i];

    char_freq[ascii] += 1;

    i++;
}
 mox =0;
for(i=0;i<max_size;i++)
{
    if(i!=32)
    {
        if(char_freq[i] > char_freq[mox])
       mox = i;
    }
}
for(i=0;i<max_size;i++){
 if(char_freq[i]>1)
      printf("Highest freq is '%c's. And that is %d\n", i, char_freq[i]);
}
    return 0;
}

