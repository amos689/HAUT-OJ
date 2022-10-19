#include <stdio.h>
#include <stdlib.h>

struct minage
{
    char name[20];
    int year;
    int month;
    int day;
};
int main()
{
    int n, i, min = 0;
    scanf("%d", &n);
    getchar();
    struct minage *a = (struct minage *)malloc(sizeof(struct minage) * n);
    for (i = 0; i < n; i++)
    {
        scanf("%s%d%d%d", a[i].name, &a[i].year, &a[i].month, &a[i].day);
        getchar();
        if (a[i].year > a[min].year)
            min = i;
        else if (a[i].year == a[min].year && a[i].month > a[min].month)
            min = i;
        else if (a[i].year == a[min].year && a[i].month == a[min].month && a[i].day > a[min].day)
            min = i;
    }
    printf("%s %d-%02d-%02d\n", a[min].name, a[min].year, a[min].month, a[min].day);
    getchar();
    return 0;
}