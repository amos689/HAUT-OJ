#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int *pa = (int *)malloc(n * sizeof(int));
    int *pb = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &pa[i]);
        getchar();
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &pb[i]);
        getchar();
    }
    int u=0;
    for (int i = 0; i < n; i++)
    {
        if(pa[i]==pb[i])
        {
            u++;
        }
    }
    if(u==n)
    {
        printf("YES");
        getchar();
        return 0;
    }
    int k = 0;
    int t = 0;//k��t�ֱ��¼��ͬ�����ж��ٸ����ڵڼ������ֲ�ͬ
    for (int i = 0; i < n; i++)
    {
        if (pa[i] != pb[i])
        {
            k += 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (pa[i] != pb[i])
        {
            t = i;
            break;
        }
    }
    int q = 0;//q������¼��һ������ͬ�����͵ڶ��������ж�Ӧ����������
    for (int j = 0; j <= 1000; j++)
    {
        pa[t] += 1;
        q += 1;
        if (pa[t] == pb[t])
        {
            break;
        }
    }
    for (int i = t + 1; i < t + k; i++)
    {
        pa[i] += q;//��ʣ�¼�����
    }
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (pa[i] == pb[i])
        {
            j++;//ͳ��������ͬ�ĸ���
        }
    }
    if (j == n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    getchar();
    return 0;
}