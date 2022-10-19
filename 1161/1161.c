#include <stdio.h>

int len(char *);

int main()
{
    char str[101] = {'\0'};
    gets(str);
    int n = len(str);
    printf("%d", n);
    getchar();
    return 0;
}
int len(char *sp)
{
    int t = 0;
    for (int i = 0; sp[i] != '\0'; i++)
    {
        if (sp[i] == ' ')
        {
        }
        else
        {
            t++;
        }
    }
    return t;
}