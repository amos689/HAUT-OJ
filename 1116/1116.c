#include<stdio.h>
#include<stdlib.h>

void del(int a[], int n, int i);
void PrintArr(int a[], int n);

int main()
{
    int n = 0, i = 0;
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &a[j]);
        getchar();
    }
    scanf("%d", &i);
    getchar();
    del(a, n, i);
    PrintArr(a, n);
    getchar();
    return 0;
}
void del(int a[], int n, int i)
{
    for (int j = i; j < n; j++)
    {
        a[j] = a[j + 1];
    }
    return;
}
void PrintArr(int a[], int n)
{
    if (n == 1 || n == 0)
    {
        printf("");
    }
    else
    {
        for (int j = 0; j < n - 1; j++)
        {
            printf("%d ", a[j]);
        }
    }
    return;
}