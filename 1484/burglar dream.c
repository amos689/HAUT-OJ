#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
    char dream[1550]={'\0'};
    char d1[11] = {"I hate it"};
    char d2[11] = {"I love it"};
    char d3[15] = {"I hate that "};
    char d4[15] = {"I love that "};
    int n = 0;
    scanf("%d", &n);
    getchar();
    for (int t = 1; t < n; t++)
    {
        if (n == 1)
        {
            break;
        }
        if (t % 2 == 1)
        {
            strncat(dream, d3,12);
        }
        else
        {
            strncat(dream, d4,12);
        }
    }
    if (n % 2 == 1)
    {
        strncat(dream, d1,9);
    }
    else
    {
        strncat(dream, d2,9);
    }
    printf("%s", dream);
    getchar();
    return 0;
}