#include <stdio.h>

int main()
{
    int i = 0;
    scanf("%d", &i);
    getchar();
    int a[1000];
    for (int j = 0; j < i; j++)
    {
        scanf("%d", &a[j]);
        getchar();
    }
    int j = 0;
    int k = 0;
    int l = 0;
    for (int t = 0; t < i; t++)
    {
        k = 1;
        for (int y = 0; y < i; y++)
        {
            if (a[t] == a[y])
            {
                k += 1;
            }
            if (j < k)
            {
                j = k;
                l = a[t];
            }
        }
    }
    printf("%d", l);
    getchar();
    return 0;
}