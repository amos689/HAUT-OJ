#include<stdio.h>

int main()
{
    int m=0,n=0;
    scanf("%d",&m);
    getchar();
    scanf("%d",&n);
    getchar();
    for(int i=m;i<=n;i++)
    {
        int k=0,p=0;
        int s=i;
        while(s!=0)
        {
            k=s%10;
            p=p*10+k;
            s/=10;
        }
        if(i==p)
        {
            printf("%d\n",i);
        }
    }
    getchar();
    return 0;
}