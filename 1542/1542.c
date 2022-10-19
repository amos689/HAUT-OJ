#include<stdio.h>
#include<math.h>

void sort(int*,int*);
int nowx=0,nowy=0,tox=0,toy=0,rx=0,ry=0;

int main()
{
    int *prx=&rx;
    int *pry=&ry;
    while(scanf("%d%d%d%d",&nowx,&nowy,&tox,&toy)!=EOF)
    {
        sort(prx,pry);
        printf("%d\n",*prx+*pry);
    }
    getchar();
    return 0;
}
void sort(int*a,int*b)
{
    *a=abs(nowx-tox);
    *b=abs(nowy-toy);
}