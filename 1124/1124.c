#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m=0,n=0;
    scanf("%d",&m);
    getchar();
    int* a=(int*)malloc(m*sizeof(int));
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
        getchar();
    }
    scanf("%d",&n);
    getchar();
    int* b=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        getchar();
    }
    int* c=(int*)malloc((m+n)*sizeof(int));
    for(int i=0;i<m;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        c[i+m]=b[i];
    }
    int buf=0;
    for (int i = 0; i < (m+n) - 1; ++i) 
    {
        for (int j = 0; j < (m+n) - 1 - i; ++j)  
        {
            if (c[j] < c[j + 1])  
            {
                buf = c[j];
                c[j] = c[j + 1];
                c[j + 1] = buf;
            }
        }
    }

    for(int i=0;i<(m+n)-1;i++)
    {
        printf("%d ",c[i]);
    }
    printf("%d",c[(m+n)-1]);
    getchar();
    return 0;
}