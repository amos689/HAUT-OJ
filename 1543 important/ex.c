#include<stdio.h>

int main()
{
    int a[10]={0},t=0;
    for(int i=0;i<10;i++)
    {
        printf("%d, ",t);
        printf("\n\n");
        a[t++]=1;
        printf("%d, ",t);
    }
    printf("\n\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    getchar();
    return 0;
}