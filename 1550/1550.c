#include <stdio.h>

int main()
{
    double x1, y1, x2, y2;
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    getchar();
    printf("%.6f", (x1 * y2 + x2 * y1) / (y1 + y2));
    getchar();
    return 0;
}