#include <stdio.h>

int main()
{
    int arr[50][50] = {1};
    int n = 0, t = 0;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                arr[i][0] = 1;
            }
            if (i > 0 && j != 0)
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
            printf("%d ", arr[i][j]);
            if (j == i)
            {
                printf("\n");
            }
        }
    }
    getchar();
    return 0;
}