#include <stdio.h>
#include <math.h>

void PrintLine(int);

int main()
{
    int n = 0;
    scanf("%d", &n);
    getchar();
    n = n * 2 - 1;
    PrintLine(n);
    getchar();
    return 0;
}
void PrintLine(int n)
{
    for (int i = 0; i < n; i++)
    {
        int k = 1;
        for (int j = 0; j < abs(n / 2 - i); j++)
        {  
            printf(" ");
        }
        for (int j = 0; j < n - 2 * abs(n / 2 - i); j++)
        {
            printf("%d", k);
            if (j < n / 2 - abs(n / 2 - i))
                k++;
            else
                k--;
        }
        printf("\n");
    }
    return;
}