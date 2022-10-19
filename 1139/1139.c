#include <stdio.h>
#include <string.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    getchar();
    char **str = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++)
    {
        str[i] = (char *)malloc(1001 * sizeof(char));
    }
    for (int i = 0; i < n; i++)
    {
        gets(str[i]);
    }
    char min[1001];
    strcpy(min, str[0]);
    for (int i = 1; i < n; i++)
    {
        if (strlen(min) > strlen(str[i]))
        {
            strcpy(min, str[i]);
        }
    }
    printf("%s",min);
    getchar();
    return 0;
}