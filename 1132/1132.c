#include<stdio.h>
int main()
{
    int n,t=0,i;
    char ch;
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        t=0;
        while(scanf("%c",&ch)&&ch!='\n')
        {
            if(ch>='0'&&ch<='9')
            t++;
        }
        printf("%d\n",t);
    }
    getchar();
    return 0;
}