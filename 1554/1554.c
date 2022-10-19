#include <stdio.h>
int main()
{
    printf("ÄãºÃ");
    int n=0;
    scanf("%d", &n);
    getchar();
    int a = 0;
    for (int i = 1; i <= n; i++)
    {
        int b = 0, c = i;
        while (c != 0)
        {
            if (c % 10 == 2)
            {
                b++;
            }
            c /= 10;
        }
        a += b;
    }
    printf("%d", a % 2020);
    getchar();
    return 0;
}