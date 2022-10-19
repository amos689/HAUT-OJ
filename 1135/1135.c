#include<stdio.h>

int main()
{
    double a,b,sum;
    char str[100];
    while(scanf("%*s%lf%lf",&a,&b)!=EOF)
    {
        sum+=a*b;
    }
    printf("%.1lf",sum);
    getchar();
    return 0;
}