#include<stdio.h>

void swap(int *pa,int *pb)
{
    int t;
    t=*pa;
    *pa=*pb;
    *pb=t;
}
int main()
{
    int a[4],*pa,*pb;
    for(int i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
        getchar();
    }
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            pa=&a[i];
            pb=&a[j];
           if(a[i]<a[j])
           {
               swap(pa,pb); 
           }
        }      
    }
    printf("%d %d %d %d",a[0],a[1],a[2],a[3]);
    getchar();
    getchar();
    getchar();
    return 0;
}