#include <stdio.h>
int main()
{
    int n, m, a;
    scanf("%d%d", &n, &m);
    getchar();
    int tip = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        getchar();
        if (a == 1)
            tip++;
    }
    if (tip == 1)
        printf("3");
    else
        printf("2");
    getchar();
    return 0;
}