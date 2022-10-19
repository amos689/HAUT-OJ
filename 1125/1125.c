#include <stdio.h>
#include <stdlib.h>

int IsUpperTriMatrix(int a[10][10], int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[i][j] != 0)
                {
                    return 0;
                }
            }
        }
        return 1;
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    getchar();
    int **a = (int **)malloc(sizeof(int *) * n );
    for (int i = 0; i < n; i++)
    {
        a[i] = (int *)malloc(sizeof(int) * n);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            getchar();
        }
    }
    int b = IsUpperTriMatrix(a, n);
    if (b == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    getchar();
    return 0;
}
