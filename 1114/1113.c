#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    getchar();
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        getchar();
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%4d", arr[i]);
    }
    getchar();
    return 0;
}