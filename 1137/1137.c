#include<stdio.h>

int main()
{
    char str[200];
    int max;
    gets(str);
    max=str[0];
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>max) 
        max=str[i];
    }
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==max)
        printf("%c(max)",str[i]);
        else 
        printf("%c",str[i]);
    }
    getchar();
    return 0;
}