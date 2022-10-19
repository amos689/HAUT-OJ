#include <stdio.h>

void inverse(int n)
{
    int num;
    if (n > 1)
    {
        scanf("%d", &num);
        getchar();
        inverse(n - 1);
        printf("%d ", num);
    }
    if (n == 1)
    {
        scanf("%d", &num);
        getchar();
        printf("%d ", num);
    }
    return;
}
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    inverse(n);
    getchar();
    return 0;
}