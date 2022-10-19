#include<stdio.h>

void convert(int n,char str[])
{ 
    int t=0,k;
    for(int i=0;n!=0;i++)
    {
        str[i]=n%2;
        n=n/2;
        t++;
    }
    for(int i=t-1;i>=0;i--)
    {
        if(str[i]!=0)
        {
            k=i;
            break;
        }
    }
    for(int i=k;i>=0;i--)
    {
        printf("%d",str[i]);
    }
}
int main()
{
    int n,t;
    char str[1000000];
    scanf("%d",&n);
    getchar();
    convert(n,str);
    getchar();
    return 0;
}