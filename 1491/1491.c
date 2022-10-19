#include<stdio.h>

int main()
{
    int m=1,n=0;
    int a[4]={0};
    int b[4]={0};
    for(int i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
        getchar();
        m*=a[i];
    }
    for(int i=0;i<4;i++)
    {
        scanf("%d",&b[i]);
        getchar();
        n+=b[i];
    }
    if(m>=n)
    {
        printf("%d",m);
    }
    else
    {
        printf("%d",n);
    }
}