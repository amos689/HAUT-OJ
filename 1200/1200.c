#include<stdio.h>

int main()
{
    int a[5]={0};
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        getchar();
    }
    int mid=0;
    for(int i=0;i<5-1;i++)
    {
        for(int j=0;j<5-1-i;j++)
        {
            if (a[j]<a[j+1])
            {
                mid=a[j];
                a[j]=a[j+1];
                a[j+1]=mid;
            }
        }
    }
    double sum=0;
    for(int i=1;i<4;i++)
    {
        sum+=a[i];
    }
    printf("%.1lf",sum/3);
    getchar();
    return 0;
}