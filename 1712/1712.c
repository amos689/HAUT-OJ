#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int press[6][8];
int puzzle[6][8];

bool guess()
{
    int i, j;
    for (i = 2; i <= 5; i++)
    {
        for (j = 1; j <= 6; j++)
        {
            // ����ͬ�е���һ�еƵ����״̬���������Ƿ񰴰�ť
            press[i][j] = (press[i - 1][j] + puzzle[i - 1][j] + press[i - 1][j - 1] + press[i - 2][j] + press[i - 1][j + 1]) % 2;
        }
    }
    for (j = 1; j <= 6; j++)
    {
        // ��һ�жϵ����еĵ��Ƿ�Ϩ��
        if (puzzle[5][j] != (press[5][j] + press[5][j - 1] + press[5][j + 1] + press[4][j]) % 2)
            return false;
    }
    return true;
}

void process()
{

    int c;
    for (c = 1; c <= 6; c++)
        press[1][c] = 0;

    while (!guess())
    {
        // ���ö����ƽ�λ���㷨����000000 - 111111ö�ٵ�һ�а�ť�ķ�ʽ
        press[1][1]++;
        c = 1;
        while (press[1][c] > 1)
        {
            press[1][c] = 0;
            c++;
            press[1][c]++;
        }
    }
}

int main()
{
    int t, i, n, j;
    // ��ʼ��0�е�����Ԫ��
    for (i = 0; i < 8; i++)
        press[0][i] = puzzle[0][i] = 0;
    // ��ʼ��0�У�7�е�����Ԫ��
    for (i = 1; i < 6; i++)
        press[i][0] = puzzle[i][0] = press[i][7] = puzzle[i][7] = 0;

    for (i = 1; i <= 5; i++)
        for (j = 1; j <= 6; j++)
            scanf("%d", &puzzle[i][j]);
    process();

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 6; j++)
        {
            printf("%d ", press[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}