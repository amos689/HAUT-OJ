#include<stdio.h>

int t=0;
int a[105]={0};

int main()
{
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
        {
            printf("HARD");
            getchar();
            return 0;
        }
    }
    printf("EASY");
    getchar();
    return 0;
}