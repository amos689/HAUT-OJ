#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM 200001
char str1[NUM], str2[NUM], *p1, *p2;
int t;

int jug(void);

int main()
{
    for(int i=0;str1[i]=getchar();i++)
    {
        if(str1[i]=='\n')
        {
            break;
        }
        p1=str1+i;
    }
    for(int i=0;str2[i]=getchar();i++)
    {
        if(str2[i]=='\n')
        {
            break;
        }
        p2=str2+i;
    }
    //scanf("%s", str1);
    //scanf("%s", str2);
    int k=jug();
    printf("%d", k);
    system("pause");
    return 0;
}
int jug(void)
{
    if (strcmp(str1, str2) == 0)
    {
        return 0;
    }
    while (strcmp(p1, p2) == 0)
    {
        p1--;
        p2--;
    }
    p1++;
    p2++;
    t = strlen(str1) - strlen(p1) + strlen(str2) - strlen(p2);
    return t;
}