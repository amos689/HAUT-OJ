#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    scanf("%d", &i);
    getchar();
    scanf("%d", &j);
    getchar();
    for (int t = 0; t < j; t++)
    {
        if (i % 10 == 0)
        {
            i /= 10;
        }
        else
        {
            i -= 1;
        }
    }
    printf("%d", i);
    getchar();
    return 0;
}