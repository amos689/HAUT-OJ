#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    getchar();
    while (1)
    {
        int a = n;
        int b = 0;
        while (n != 0)
        {
            a = n % 10;
            n /= 10;
            b += a;
        }
        n=b;
        if (b < 10)
        {
            printf("%d",b);
            break;
        }
    }
    getchar();
    return 0;
}