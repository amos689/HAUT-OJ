#include<stdio.h>

int main()
{
    int a[4] = {0};
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
        getchar();
        sum += a[i];
    }
    int goal = 0;
    scanf("%d", &goal);
    getchar();
    if (sum >= goal)
    {
        printf("Blessings for your college career!");
    }
    else
    {
        printf("Blessings for your \"fourth grade\" in high school!");
    }
    getchar();
    return 0;
}