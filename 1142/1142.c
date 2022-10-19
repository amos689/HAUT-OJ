#include <stdio.h>
#include <string.h>

int bToD(char str[])
{
    int a = 1, sum = 0, i, m;
    m = strlen(str);
    for (i = m - 1; i >= 0; i--)
    {
        sum += (str[i] - '0') * a;
        a = a * 2;
    }
    return sum;
}
int main()
{
    int k, a[3];
    char str[60];
    for (int i = 0; i < 3; i++)
    {
        scanf("%s", str);
        a[i] = bToD(str);
    }
    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            if (a[j] < a[j - 1])
            {
                k = a[j];
                a[j] = a[j - 1];
                a[j - 1] = k;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}