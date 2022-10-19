#include<stdio.h>
#include<stdlib.h>
int red,yellow,green;
int n;
int sum = 0;
int main()
{
    scanf("%d%d%d",&red,&yellow,&green);
    scanf("%d",&n);
    for(int i = 1;i <= n; i++)
    {
        int k,t;
        scanf("%d%d",&k,&t);
        if(k == 0)
        {
            sum += t;
        }
        else if(k == 1) // red
        {
            sum += t;
        }
        else if(k == 2) // yellow
        {
            sum += t + red;
        }
        else if(k == 3) // green
        {
            sum = sum;
        }
    }
    printf("%d",sum);
    return 0;
}