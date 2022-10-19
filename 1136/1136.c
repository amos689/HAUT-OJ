#include<stdio.h>

int main()
{
    char str[100]={'\0'};
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(i==0&&str[i]>=97)
        {
            str[i]-=32;
        }
        if(str[i]==' '&&str[i+1]!= '\0'&&str[i+1]>=97)
        {
            str[i+1]-=32;
        }
    }
    printf("%s",str);
    getchar();
    return 0;
}