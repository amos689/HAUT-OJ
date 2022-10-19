#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n=0;
	scanf("%d", &n);
    getchar();
    int*a=(int*)malloc(n*sizeof(int));
    char**b=(char**)malloc(n*sizeof(char*));
    for(int i=0;i<n;i++)
    {
        b[i]=(char*)malloc(sizeof(char)*2000);
    }
	for (int i = 0; i < n; i++)
	{
		scanf("%s", b[i]);
        getchar();
		scanf("%d", &a[i]);
        getchar();
	}
    int m;
	char temp[20];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			m = strcmp(b[i], b[j]);
			if (a[i] > a[j])
			{
				m = a[j];
				a[j] = a[i];
				a[i] = m;
				strcpy(temp, b[j]);
				strcpy(b[j], b[i]);
				strcpy(b[i], temp);
				j--;
			}
			else if (a[i] == a[j]&&m < 0)
				{
					m = a[j];
					a[j] = a[i];
					a[i] = m;
					strcpy(temp, b[j]);
					strcpy(b[j], b[i]);
					strcpy(b[i], temp);
					j--;
				}
		}
	for (int i = 0; i < n; i++)
	{
		{
			printf("%s ", b[i]);
		}
		printf("%d\n", a[i]);
	}
    free(a);
    free(b);
    getchar();
    return 0;
}