#include <stdio.h>

int main()
{
    int a[100], k;
    scanf("%d", &k);
    getchar();
    a[1] = 1, a[2] = 2;
    for (int i = 3; i <= 20; ++i)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    while (k != 0)
    {
        int n;
        scanf("%d", &n);
        getchar();
        printf("%d\n", a[n]);
        k--;
    }
    getchar();
    return 0;
}