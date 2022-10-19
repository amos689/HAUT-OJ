#include <stdio.h>
#include <stdlib.h>

void LargestTow(int a[], int n, int *pfirst, int *psecond);

int main()
{
    int n = 0;
    scanf("%d", &n);
    getchar();
    int *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        getchar();
    }
    int *pfirst,*psecond;
    LargestTow(a, n, pfirst, psecond);
    printf("%d %d\n", a[0], a[1]);
    
    printf("%d %d", *pfirst, *psecond);
    getchar();
    return 0;
}

void LargestTow(int a[], int n, int *pfirst, int *psecond)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mid = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                mid = a[j];
                a[j] = a[j + 1];
                a[j + 1] = mid;
            }
        }
    }
    *pfirst=a[0];
    *psecond=a[1];
    return;
}