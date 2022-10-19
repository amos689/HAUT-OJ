#include<stdio.h>

int common(int x,int y)
{
    if(x==y)
    {
        return x;
    }
    else if(x>y)
    {
        return common(x/2,y);
    }
    else
    {
        return common(x,y/2);
    }
}
int main()
{
    int x=0,y=0;
    scanf("%d%d",&x,&y);
    getchar();
    int p=common(x,y);
    printf("%d",p);
    getchar();
    return 0;
}