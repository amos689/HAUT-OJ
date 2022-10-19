#include <stdio.h>
int main()
{
    int k;
    while (~scanf("%d", &k))
    {
        getchar();
        if (k == 1)
            printf("monday\n");
        else if (k == 2)
            printf("tuesday\n");
        else if (k == 3)
            printf("wednesday\n");
        else if (k == 4)
            printf("thursday\n");
        else if (k == 5)
            printf("friday\n");
        else if (k == 6)
            printf("saturday\n");
        else
            printf("sunday\n");
    }
    getchar();
    return 0;
}