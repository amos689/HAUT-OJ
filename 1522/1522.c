#include<stdio.h>

int main()
{
    int m=0,n=0;
    scanf("%d",&m);
    getchar();
    scanf("%d",&n);
    getchar();
    int *pm=&m,*pn=&n;
    int t=0;
    while(*pm<*pn)
    {
        *pm=*pm*2;
        t+=1;
    }
    if(*pm==*pn)
    {
        printf("%d",t);
        return 0;
    }
    if(*pn>(*pm+*pm/2)/2)
    {
        printf("%d",t+*pm-*pn-1);
    }
    if(*pn<=(*pm+*pm/2)/2)
    {
        t-=1;
        *pm=*pm/2;
        printf("%d",t+*pn-*pm);
    }
    getchar();
    return 0;
}