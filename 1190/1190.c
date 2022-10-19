#include <stdio.h>
#include<stdlib.h>
#include <string.h>
struct minage
{
    char num[15], name[20];
    int chinese, math, english;
};
int main()
{
    int n, i;
    char b[15];
    scanf("%d", &n);
    getchar();
    struct minage *a = (struct minage *)malloc(sizeof(struct minage) * n);
    for (i = 0; i < n; i++)
    {
        scanf("%s%s%d%d%d", a[i].num, a[i].name, &a[i].chinese, &a[i].math, &a[i].english);
        getchar();
    }
    scanf("%s", b);
    getchar();
    for (i = 0; i < n; i++)
    {
        if (strcmp(a[i].num, b) == 0)
            break;
    }
    if (i < n)
        printf("%s %s %d %d %d\n", a[i].num, a[i].name, a[i].chinese, a[i].math, a[i].english);
    else
        printf("Not Found\n");
    getchar();
    return 0;
}