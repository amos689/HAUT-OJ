#include<stdio.h>

int inverse(int);

int main()
{
    int m=0;
    scanf("%d",&m);
    getchar();
    int n=0;
    n=inverse(m);
    while(n!=m)
    {
        printf("%d ",m);
        m=m+n;
        n=inverse(m);
    }
    printf("%d",n);
    getchar();
    return 0;
}
int inverse(int num)
{
    int m=0,n=0,s=0;
    s=num;
    while(s!=0)
    {
        m=s%10;
        n=n*10+m;
        s/=10;
    }
    return n;
}