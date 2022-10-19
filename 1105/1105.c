#include <stdio.h>
#include <stdlib.h>

int FacSum(int);

int main()
{
    int n, m, p, q, t = 0;
    scanf("%d%d", &n, &m);
    getchar();
    for (; n <= m; n++)
    {
        p = FacSum(n);
        q = FacSum(p);
        if (n == q && n != p && p <= m)
        {
            printf("%d %d\n", n, p);
            t = 1;
            n = p;
        }
    }
    if (t == 0)
    {
        printf("No answer");
        getchar();
    }
    getchar();
    return 0;
}

int FacSum(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}