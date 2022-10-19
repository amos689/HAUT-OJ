#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    int n, k;
    char str[101], ch;
    scanf("%d", &t);
    getchar();
    for (int i = 0; i < t; i++)
    {
        scanf("%s",str);
        getchar();
        scanf("%c", &ch);
        getchar();
        ch -= 48;
        for (int j = 0; str[i] != '\0'; j++)
        {
            if (str[j] == '.')
            {
                n = j;
                break;
            }
        }
        if ((n + ch) < strlen(str))
        {
            printf("%c\n", str[n + ch]);
        }
        else
        {
            printf("0\n");
        }
    }
    getchar();
    return 0;
}