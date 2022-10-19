#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    if (n % 2 == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    getchar();
    return 0;
}