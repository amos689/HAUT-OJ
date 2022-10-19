#include <stdio.h>
int a[1000010], b[1000010];
int main()
{
    int m, n, i, j, k = 0;
    scanf("%d", &m);
    getchar();
    for (i = m - 1; i >= 0; i--)
    {
        scanf("%d", &a[i]);
        getchar();
    }
    scanf("%d", &n);
    getchar();
    for (j = 0; j < n; j++)
    {
        scanf("%d", &b[j]);
        getchar();
    }
    int c[m + n], s = 0, t = 0;
    while (s < m && t < n)
    {
        if (a[s] >= b[t])
            c[k++] = a[s++];
        else
            c[k++] = b[t++];
    }
    while (s < m)
    {
        c[k++] = a[s++];
    }
    while (t < n)
    {
        c[k++] = b[t++];
    }
    for (k = 0; k < m + n - 1; k++)
    {
        printf("%d ", c[k]);
    }
    printf("%d", c[m + n - 1]);
    getchar();
    return 0;
}