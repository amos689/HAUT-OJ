#include<stdio.h>
int main()
{
    int n, a[1000], i, t, min;
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
        getchar();
    min = a[0];
    for (i = 1; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (min == a[i])
        {
            printf("%d %d", min, i);
            break;
        }
    }
    getchar();
    return 0;
}
