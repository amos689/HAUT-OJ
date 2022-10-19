#include<stdio.h>

int a[100005], n, flag = 0;
int main()
{
    while (scanf("%d", &n) != EOF)
    {
        flag = 0;
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] <= a[i + 1])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("No\n");
        else if (flag == 1)
            printf("Yes\n");
    }
    return 0;
}