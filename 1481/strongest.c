#include<stdio.h>

int main()
{
    int i=0;
    int j=0;
    scanf("%d",&i);
    getchar();
    scanf("%d",&j);
    getchar();
    int t=0;
    while(i<=j)
    {
        i*=3;
        j*=2;
        t++;
    }
    printf("%d",t);
    getchar();
    return 0;
}