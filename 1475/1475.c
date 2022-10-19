#include <stdio.h>

int main()
{
    char str[3][3] = {'\0'};
    int m = 0, n = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%c", &str[i][j]);
            getchar();
            for (int i = 0; i < 3; i++)
            {
                if (str[i][0] == str[i][1])
                {
                    if (str[i][1] == str[i][2])
                    {
                        if (str[i][0] == 'O')
                        {
                            m = 1;
                        }
                        else if (str[i][0] == 'X')
                        {
                            m = 2;
                        }
                    }
                }
            }
            for (int i = 0; i < 3; i++)
            {
                if (str[0][i] == str[1][i])
                {
                    if (str[1][i] == str[2][i])
                    {
                        if (str[0][i] == 'O')
                        {

                            m = 1;
                        }
                        else if (str[0][i] == 'X')
                        {

                            m = 2;
                        }
                    }
                }
            }
            if (str[0][2] == str[1][1])
            {
                if (str[1][1] == str[2][0])
                {
                    if (str[1][1] == 'O')
                    {
                        m = 1;
                    }
                    else if (str[1][1] == 'X')
                    {
                        m = 2;
                    }
                }
            }
            if (str[0][0] == str[1][1])
            {
                if (str[1][1] == str[2][2])
                {
                    if (str[0][0] == 'O')
                    {
                        m = 1;
                    }
                    else if (str[0][0] == 'X')
                    {
                        m = 2;
                    }
                }
            }
        }
    }
    if(m==1)
    {
        printf("CXKNB");
    }
    else
    {
        printf("AWNB");
    }
    getchar();
    return 0;
}