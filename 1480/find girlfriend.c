#include <stdio.h>
int main()
{
    char name[101];
    scanf("%s", name);
    getchar();
    int i = 0;
    int t = 0;
    for (t = 0; name[t] != '\0';)
    {
        t = t + 1;
    }
    for (int j = 0; j < t; j++)
    {
        for (int k = j + 1; k < t; k++)
        {
            if (name[j] == 0)
            {
                break;
            }
            if (name[j] == name[k])
            {
                i += 1;
                name[k] = 0;
            }
        }
    }
    i = t - i;
    if (i % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    getchar();
    return 0;
}