#include <stdio.h>
int main()
{
    const int size = 3;
    char board[size][size];
    int i, j;
    int x, o;
    int result = -1;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%c", &board[i][j]);
            getchar();
        }
    }
    for (i = 0; i < size && result == -1; i++)
    {
        x = o = 0;
        for (j = 0; j < size; j++)
        {
            if (board[i][j] == 'X')
                x++;
            else
                o++;
        }
        if (o == size)
        {
            result = 0;
        }
        else if (x == size)
        {
            result = 1;
        }
    } /*检查行*/
    if (result == -1)
    {
        for (j = 0; j < size; j++)
        {
            x = o = 0;
            for (i = 0; i < size; i++)
            {
                if (board[j][i] == 'X')
                {
                    x++;
                }
                else
                {
                    o++;
                }
                if (o == size)
                {
                    result = 0;
                }
                else if (x == size)
                {
                    result = 1;
                }
            }
        }
    } /*检查列*/
    x = o = 0;
    if (result == -1)
    {
        x = o = 0;
        for (i = 0; i < size; i++)
        {
            if (board[i][i] == 'X')
            {
                x++;
            }
            else if (board[i][i] == 'O')
            {
                o++;
            }
            if (o == size)
            {
                result = 0;
            }
            else if (x == size)
            {
                result = 1;
            }
        }
    } /*检查正对角线*/
    if (result == -1)
    {
        x = o = 0;
        for (i = 0; i < size; i++)
        {
            if (board[i][size - i - 1] == 'X')
            {
                x++;
            }
            else
            {
                o++;
            }
        }
        if (x == size)
        {
            result = 1;
        }
        else if (o == size)
        {
            result = 0;
        }
    }
    switch (result)

    {

    case 0:
        printf("AWNB");
        break;
    case 1:
        printf("CXKNB");
        break;
    case -1:
        printf("CXKNB");
    }
    getchar();
    return 0;
}
