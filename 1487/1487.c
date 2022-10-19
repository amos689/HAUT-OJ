#include <stdio.h>

int main()
{
    int i = 0, j = 0, n = 0;
    long long int m=0;
    scanf("%d", &i);
    getchar();
    scanf("%d", &j);
    getchar();
    scanf("%d", &n);
    getchar();
    long long int a[1000] = {i, j, 0};
    if (n <= 2)
    {
        if (n == 1)
        {
            printf("%d", i);
        }
        if (n == 2)
        {
            printf("%d", i + j);
        }
    }
    else
    {
        for (int p = 2; p < 1000; p++)
        {
            a[p] = a[p - 1] + a[p - 2];
        }
        for (int q = 0; q < n; q++)
        {
            m += a[q];
        }
        printf("%lld", m);
    }
    getchar();
    return 0;
}