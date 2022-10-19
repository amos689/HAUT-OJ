#include <stdio.h>
#include <stdlib.h>
int find(int a[], int n, int x);
void del(int a[], int n, int i);
void PrintArr(int a[], int n);
int main()
{
    int n = 0, x = 0;
    scanf("%d", &n);
    getchar();
    int *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        getchar();
    }
    scanf("%d", &x);
    getchar();
    int i = find(a, n, x);
    if (i == -1)
    {
        printf("Not Found");
    }
    else
    {
        del(a, n, i);
        PrintArr(a, n);
    }
    getchar();
    return 0;
}
int find(int a[], int n, int x)
{
    for (int  i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
           return i;
        }
    }
    return -1;
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
            printf("%4d ", a[j]);
        }
    }
    return;
}