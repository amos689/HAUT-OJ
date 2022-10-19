#include<stdio.h>
int standard, maxd;
int binary_search();
int main()
{
    while (scanf("%d%d", &maxd, &standard) != EOF)
    {
        int counter = binary_search();
        printf("%d\n", counter);
    }
    return 0;
}

int binary_search()
{
    int times = 0, right = maxd, left = 0;

    while (right > left)
    {
        int mid = (left + right) / 2;
        if (mid == standard)
            return times;

        if (mid < standard)
            left = mid, times++;
        else if (mid > standard)
            right = mid, times++;
    }
}