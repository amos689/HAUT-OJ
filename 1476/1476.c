#include<stdio.h>

typedef long long ll;

int main()
{
    int n=0;
    scanf("%d",&n);
    getchar();
    ll a[10005]={0};
    ll t=0;
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        getchar();
        t+=a[i];
    }
    printf("%lld",t);
    getchar();
    return 0;
}