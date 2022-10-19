#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int *pa = (int *)malloc(n * sizeof(int));
    int *pb = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &pa[i]);
        getchar();
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &pb[i]);
        getchar();
    }
    int u=0;
    for (int i = 0; i < n; i++)
    {
        if(pa[i]==pb[i])
        {
            u++;
        }
    }
    if(u==n)
    {
        printf("YES");
        getchar();
        return 0;
    }
    int k = 0;
    int t = 0;//k和t分别记录不同的数有多少个和在第几个出现不同
    for (int i = 0; i < n; i++)
    {
        if (pa[i] != pb[i])
        {
            k += 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (pa[i] != pb[i])
        {
            t = i;
            break;
        }
    }
    int q = 0;//q用来记录第一个不相同的数和第二个数组中对应的数相差多少
    for (int j = 0; j <= 1000; j++)
    {
        pa[t] += 1;
        q += 1;
        if (pa[t] == pb[t])
        {
            break;
        }
    }
    for (int i = t + 1; i < t + k; i++)
    {
        pa[i] += q;//给剩下几个加
    }
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (pa[i] == pb[i])
        {
            j++;//统计现在相同的个数
        }
    }
    if (j == n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    getchar();
    return 0;
}