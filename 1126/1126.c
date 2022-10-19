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
	    for (int i = 0; i < 10-1; i++)  //因为倒数第二个和最后一个已经比过了，所以无需i<10
	    {
	        max = i;   //每循环一轮使默认最大值往下走一个
	        for (int j = i + 1; j < 10; j++)  //a[max]只用往下比就行了
	        {
	            if (a[max] < a[j])
	            {
	                max = j;
	            }
	        }
	        if (max != i)  //比完之后如果a[max]依旧等于a[i]，那就不用换了
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