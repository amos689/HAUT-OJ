#include <stdio.h>

int main()
{
    int a;
    long long n, b;
    scanf("%d", &a);
    getchar();
    while (a--)
    {
        scanf("%lld%lld", &b, &n);
        getchar();
        long long res = n * (n + 1) * b / 2;
        printf("%lld\n", res);
    }
    getchar();
    return 0;
}
