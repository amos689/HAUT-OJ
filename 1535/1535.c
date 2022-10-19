#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    if (t % 3 == 0)
    {
        for (int i = 0; i < t; i++)
            printf("nana");
    }
    else if (t % 3 == 1)
    {
        for (int i = 0; i < t; i++)
            printf("nanana");
    }
    else
    {
        for (int i = 0; i < t; i++)
            printf("nananana");
    }
    getchar();
    getchar();
    return 0;
}
