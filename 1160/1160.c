#include<stdio.h>

void FindMax(int p[][3],int m,int n,int *pRow,int *pCol);

int main()
{
    int p[2][3],i,j;
    int *pRow,*pCol;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&p[i][j]);
            getchar();
        }     
    }
    FindMax(p,2,3,pRow,pCol);
    getchar();
    getchar();
    return 0;
}
void FindMax(int p[][3],int m,int n,int *pRow,int *pCol)
{
    int i,j,max,k=0;
    max=p[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(p[i][j]>max)
            {
                max=p[i][j];
            } 
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(p[i][j]==max)
            {
                pRow=&i;
                pCol=&j;
                k=1;
                break;
            }
        }
        if(k==1) break;
    }
    printf("%d %d %d",max,*pRow,*pCol);
}