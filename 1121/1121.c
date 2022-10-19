#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n=0,t=0;
    scanf("%d",&n);
    getchar();
    int* a=(int *)malloc((n+1)*sizeof(int));
    int m=n+1;
    a[0]=0;
    for(int i=1;i<n+1;i++)
    {
        scanf("%d",&a[i]);
        getchar();
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            t+=5;
        }
        else if(a[i]<a[i+1])
        {
            t+=6*(a[i+1]-a[i]);
            t+=5;
        }
        else
        {
            t+=4*(a[i]-a[i+1]);
            t+=5;
        }
    }
    printf("%d",t);
    getchar();
    return 0;  
}