	#include<stdio.h>
	#include<time.h>
	#include<stdlib.h>
	int main(void)
	{
	    time_t t;
	    srand((unsigned int)time(&t));
	    int a[10];
	    for (int i = 0; i < 10; i++)
	    {
	        a[i] = rand() % 100;
	        printf("%d  ", a[i]);
	    }
	    printf("\n\n");
	    int max = 0;
	    for (int i = 0; i < 10-1; i++)  //��Ϊ�����ڶ��������һ���Ѿ��ȹ��ˣ���������i<10
	    {
	        max = i;   //ÿѭ��һ��ʹĬ�����ֵ������һ��
	        for (int j = i + 1; j < 10; j++)  //a[max]ֻ�����±Ⱦ�����
	        {
	            if (a[max] < a[j])
	            {
	                max = j;
	            }
	        }
	        if (max != i)  //����֮�����a[max]���ɵ���a[i]���ǾͲ��û���
	        {
	            int k = 0;
	            k = a[max];
	            a[max] = a[i];
	            a[i] = k;
	        }
	    }
	    for (int i = 0; i < 10; i++)
	    {
	        printf("%d\n", a[i]);
	    }
	    getchar();
	    return 0;
}