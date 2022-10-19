#include <stdio.h>

int main()
{
    int n = 0, s = 0, t = 0;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s);
        getchar();
        scanf("%d", &t);
        getchar();
        while (t != 0)
        {
            while (s % 10 != 0 && t != 0)
            {
                s = s - 1;
                t -= 1;
            }
            if (t != 0)
            {
                s /= 10;
                t -= 1;
            }
        }
        printf("%d\n", s);
    }
    getchar();
    return 0;
}