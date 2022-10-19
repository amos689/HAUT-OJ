#include<stdio.h>

char *decimal(char *p);

int main()
{
    char str[101];
    char *p=str;
    gets(str);
    p=decimal(p);
    for(int i=0;p[i]!='\0';i++)
    {
        
    }
}
char *decimal(char *p)
{
    for(int i=0;p[i]!='\0';i++)
    {
        if(p[i]=='.')
        {
            return p+i;
        }
    }
}