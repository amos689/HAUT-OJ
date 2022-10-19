#include<stdio.h>

int main()
{
    char str[1000]={'\0'};
    gets(str);
    int n=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' '&&str[i+1]==' ')
        {
            n++;
        }
    }
    for(int i=0;i<1000;i++)
    {
        if(str[i]=='\0'&&str[i-1]==' ')
        {
            n--;
        }
    }
    n++;
    printf("%d",n);
    getchar();
    return 0;
}