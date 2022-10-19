#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    scanf("%d", &x);
    getchar();
    scanf("%d", &y);
    getchar();
    scanf("%d", &z);
    getchar();
    int a[10][10] = {0};
    int b[10][10] = {0};
    int c[10][10] = {0};
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &a[i][j]);
            getchar();
        }
    }
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < z; j++)
        {
            scanf("%d", &b[i][j]);
            getchar();
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int k = 0; k < z; k++)
        {
            for (int j = 0; j < y; j++)
            {
                c[i][k] += a[i][j] * b[j][k];
            }
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < z; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    getchar();
    return 0;
}