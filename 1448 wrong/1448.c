#include<stdio.h>

typedef long long ll;

int main()
{
    int n=0;
    scanf("%d",&n);
    getchar();
    ll hui=0;
    hui=n;
    int p=0;
    while(n/10!=0)
    {
        n/=10;
        p++;
    }
    p++;
    ll m=hui;
    int t=0;
    for(int i=0;i<p;i++)
    {
        t=m%10;
        hui*=10;
        hui+=t;
        m/=10;
    }
    printf("%lld",hui);
    getchar();
    return 0;
}