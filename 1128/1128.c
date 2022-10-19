#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m=0,n=0;
    scanf("%d%d",&m,&n);
    getchar();
    double **a=(double**)malloc(sizeof(double*)*m);
    for(int i=0;i<m;i++)
    {
        a[i]=(double *)malloc(sizeof(double)*n);
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%lf",&a[i][j]);
            getchar();
        }
    }
    double avg=0;
    for(int j=0;j<n;j++)
    {
        avg=0;
        for(int i=0;i<m;i++)
        {
            avg+=a[i][j];
        }
        avg/=m;
        printf("%.2lf ",avg);
    }
    free(a);
    getchar();
    return 0;
}