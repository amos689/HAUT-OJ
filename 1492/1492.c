#include <stdio.h>

int main()
{
    int n = 0, m = 0;
    int a[105] = {0};
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        getchar();
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != 0)
        {
            if (a[i] == 4)
            {
                m += 1;
                a[i] = 0;
            }
            else
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (a[i] + a[j] == 4)
                    {
                        m += 1;
                        a[i] = 0;
                        a[j] = 0;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] + a[j] <= 4)
                {
                    a[j] = a[i] + a[j];
                    a[i] = 0;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            m += 1;
        }
    }
    printf("%d", m);
    getchar();
    return 0;
}