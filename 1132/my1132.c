#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    getchar();
    char **str = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++)
    {
        str[i] = (char *)malloc(1000 * sizeof(char));
    }
    for (int i = 0; i < n; i++)
    {
        gets(str[i]);
    }
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        t = 0;
        for (int j = 0; str[i][j] != '\0'; j++)
        {
            if (str[i][j] >= '0' && str[i][j] <= '9')
            {
                t++;
            }
        }
        printf("%d\n", t);
    }
    free(str);
    getchar();
    return 0;
}