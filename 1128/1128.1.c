#include<stdio.h>
int main()
{
    double a[1000][10],t,sum=0;
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%lf",&a[i][j]);
        }
    }
    for(j=0;j<n;j++)
    {
        sum=0;
        for(i=0;i<m;i++)
        {  
            sum+=a[i][j];
        }
        t=sum*1.0/m;
        printf("%.2lf ",t);
    }
    return 0;
}