#include<stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    getchar();
    int t=0;
    while((n-5)>=0)
    {
        t++;
        n-=5;
    }
    switch (n)
    {
    case 4:
    case 3:
    case 2:
    case 1:
        t++;
        break;
    default:
        break;
    }
    printf("%d",t);
    getchar();
    return 0;
}