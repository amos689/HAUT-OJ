#include <stdio.h>
struct Student
{
    char hao[15];
    char name[25];
    int o;
    int q;
    int e;
};
int main()
{
    int n, max = 0;
    scanf("%d", &n);
    getchar();
    struct Student a[100];
    int s[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%s%s%d%d%d", a[i].hao, a[i].name, &a[i].o, &a[i].q, &a[i].e);
        s[i] = a[i].o + a[i].q + a[i].e;
        if (s[i] > s[max])
            max = i;
    }
    printf("%s %s %d %d %d\n", a[max].hao, a[max].name, a[max].o, a[max].q, a[max].e);
    getchar();
    return 0;
}