#include<stdio.h>

typedef long long ll;

int main()
{
    ll n=0;
    scanf("%lld",&n);
    ll num=0;
    scanf("%lld",&num);
    int sum=1;
    ll y=num;
    for(int i=2;i<=n;i++)
    {
        scanf("%lld",&num);
        if(sum==0)
        {
            y=num;
            sum=1;
        }
        else if (num==y)
        {
            sum++;
        }
        else
        {
            sum--;
        }
    }
    printf("%lld\n",y);
        return 0;
}