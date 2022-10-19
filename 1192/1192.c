#include <stdio.h>
#include <stdlib.h>

struct minage
{
    long long hao;
    char name[20];
    int x;
    int y;
    int z;
};

int main()
{
    int n, j, flag = 1;
    long long t;
    scanf("%d", &n);
    getchar();
    struct minage *a = (struct minage *)malloc(sizeof(struct minage) * n);
    for (int i = 0; i < n; i++)
        scanf("%lld%s%d%d%d", &a[i].hao, a[i].name, &a[i].x, &a[i].y, &a[i].z);
    getchar();
    scanf("%lld", &t);
    getchar();
    for (int i = 0; i < n; i++)
    {
        if (a[i].hao == t)
        {
            flag = 0;
            j = i;
            break;
        }
    }
    if (flag == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (i != j)
                printf("%lld %s %d %d %d\n", a[i].hao, a[i].name, a[i].x, a[i].y, a[i].z);
        }
    }
    else
        printf("error!");
    getchar();
    return 0;
}