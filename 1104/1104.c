#include <stdio.h>

int FacSum(int);

int main()
{
    int m = 0;
    scanf("%d", &m);
    getchar();
    int n = FacSum(m);
    printf("%d", n);
    getchar();
    return 0;
}
int FacSum(int n)
{
    int k = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            k += i;
        }
    }
    return k;
}