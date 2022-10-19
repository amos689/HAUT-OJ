#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    getchar();
    int *a = (int *)malloc((n+1) * sizeof(int));
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &a[i]);
        getchar();
    }
    for (int i = 1; i <= n; ++i)
    {
        int sum = 0;
        for (int j = i; j <= n; ++j)
        {
            sum = (sum + a[j]) % n;
            if (sum == 0)
            {
                printf("%d %d", i, j);
                getchar();
                return 0;
            }
        }
    }
    getchar();
    return 0;
}