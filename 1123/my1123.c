#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    getchar();
    int *a = (int *)malloc(n * sizeof(int));
    char **str = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++)
    {
        str[i] = (char *)malloc(21 * sizeof(char));
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%s%d", str[i], &a[i]);
        getchar();
    }
    char ch[21] = {'\0'};
    int mid = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                mid = a[j];
                a[j] = a[j + 1];
                a[j + 1] = mid;
                strcpy(ch, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], ch);
            }
            if (a[j] == a[j + 1])
            {
                for (int t = 0; str[j][t] != '\0'; t++)
                {
                    if(strlen(str[j])>strlen(str[j+1]))
                    {
                        mid = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = mid;
                        strcpy(ch, str[j]);
                        strcpy(str[j], str[j + 1]);
                        strcpy(str[j + 1], ch);
                        break;
                    }
                    if (str[j][t] < str[j+1][t])
                    {
                        mid = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = mid;
                        strcpy(ch, str[j]);
                        strcpy(str[j], str[j + 1]);
                        strcpy(str[j + 1], ch);
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s %d\n", str[i], a[i]);
    }
    getchar();
    return 0;
}