#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, t, k, a[2005];
    scanf("%d%d", &n, &t);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &k);
        a[k]++;
    }
    int ans = 9999999;
    for (int i = 1; i < 101; i++)
    {
        int temp = i + t, sum = 0;
        for (int j = 1; j < 101; j++)
        {
            if (j >= i && j <= temp)
                continue;
            sum += a[j];
        }
        if(ans>sum)
        {
            ans=sum;
        }
    }
    printf("%d\n", ans);
    system("pause");
    return 0;
}