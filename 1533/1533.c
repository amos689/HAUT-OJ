#include <stdio.h>

int main()
{
    int n, a, b, c, d, e, f, g, h, i;
    scanf("%d", &n);
    getchar();
    if (n == 1)
    {
        scanf("%d", &a);
        printf("%d", a);
    }
    else if (n == 2)
    {
        scanf("%d%d%d%d", &a, &b, &c, &d);
        printf("%d", a * d - b * c);
    }
    else
    {
        scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
        getchar();
        scanf("%d%d%d", &g, &h, &i);
        getchar();
        printf("%d", a * e * i + b * f * g + c * d * h - a * f * h - b * d * i - c * e * g);
    }
    getchar();
    getchar();
    return 0;
}