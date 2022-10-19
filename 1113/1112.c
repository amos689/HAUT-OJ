#include <stdio.h>

int t = 0;

int fib(int k);

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar();
    printf("%d\n", fib(n));
    printf("递归调用了%d次", t);
    getchar();
    return 0;
}

int fib(int k)
{
    t += 1;
    if (k == 1 || k == 2)
        return 1;
    else
        return fib(k - 1) + fib(k - 2);
}