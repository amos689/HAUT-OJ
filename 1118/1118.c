#include<stdio.h>

void insert(int a[], int n, int num);
void PrintArr(int a[], int n);

int main()
{
    int a[1000];
    int n, i, num;
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        getchar();
    }
    scanf("%d", &num);
    getchar();
    insert(a, n, num);
    PrintArr(a, n);
    getchar();
    return 0;
}

void insert(int a[], int n, int num)
{
    int i;
    for (i = n - 1; i >= 0; i--)
    {
        if (num < a[i])
        {
            a[i + 1] = a[i];
            if (i == 0)
            {
                a[0] = num;
            }
        }
        else
        {
            a[i + 1] = num;
            break;
        }
    }
}

void PrintArr(int a[], int n)
{
    int i;
    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", a[i]);
    }
}