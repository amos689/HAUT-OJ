#include<stdio.h>

int a[100005];
int ans=0,ask,m,n,x,y,w;

int main()
{
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=m;i++)
    {
        scanf("%d %d %d",&x,&y,&w);
        for(int j=x;j<=y;j++)
        {
            a[j]+=w;
        }
    }
    scanf("%d",&ask);
    printf("%d",a[ask]);
    return 0;
}