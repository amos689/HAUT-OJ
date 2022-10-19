#include<stdio.h>
#include<math.h>

int main()
{
    int x1,y1,r1,x2,y2,r2;
    scanf("%d%d%d%d%d%d",&x1,&y1,&r1,&x2,&y2,&r2);
    getchar();
    double dist1=0,dist2=0;
    dist1=pow((x1-x2),2)+pow((y1-y2),2);
    dist2=pow((r1+r2),2);
    if(dist1<dist2)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    getchar();
    return 0;
}