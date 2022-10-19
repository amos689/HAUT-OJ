#include<stdio.h>
int find(int a[],int n,int x);
void del(int a[],int n,int c);
void PrintArr(int a[],int n);
int main()
{
	int a[81];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int c,d;
	scanf("%d",&c);
	d=find(a,n,c);
	if(d==-1)
	{
		printf("Not Found");
	}
	else
	{
		del(a,n,d);
		PrintArr(a,n-1);
	}
	return 0;
}
int find(int a[],int n,int x)
{
	int i,r=-1;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			r=i;
		}
	}
	return r;
}
void del(int a[],int n,int c)
{
	int i;
	for(i=c;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
}
void PrintArr(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
}