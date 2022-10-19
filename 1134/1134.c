#include<stdio.h>

int main()
{
    char str[1000]={'\0'};
    int n=0;
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=48&&str[i]<=57)
        {
            n=n+str[i]-48;
            n*=10;
        }
    }
    n/=10;
    n*=2;
    printf("%d",n);
    getchar();
    return 0;
}