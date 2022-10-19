#include<stdio.h>

void convert(int n)
{
    if(n==0||n==1)
    {
        printf("%d",n);
    }
    else
    {
        convert(n/2);
        printf("%d",n%2);
    }
    return;
}
int main()
{
    int n=0;
    scanf("%d",&n);
    getchar();
    convert(n);
    getchar();
    return 0;
}