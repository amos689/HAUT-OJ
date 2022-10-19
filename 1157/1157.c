#include <stdio.h>

int main()
{
    int n = 0, t = 0, m = 0, k = 0;
    char str[1001];
    scanf("%s", str);
    getchar();
    for (int i = 0; str[i] != '\0'; i++)
    {
        k++;
    }
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < k - n + 1; i++)
    {
        t = 0;
        for (int j = 0; j < n; j++)
        {
            if (str[i + j] != '1')
            {

            }
            else
            {
                t += 1;
            }
            if (t == n)
            {
                m++;
            }
        }
    }
    printf("%d", m);
    getchar();
    return 0;
}