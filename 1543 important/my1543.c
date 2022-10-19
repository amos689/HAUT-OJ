#include <stdio.h>
#include <string.h>

int count[105] = {0}, num = 0;
char words[105][20]={'\0'};
char keep[20]={'\0'};

int main()
{
    while (scanf("%s", keep) != EOF)
    {
        int address = -1;
        for (int i = 0; i < num; i++)
        {
            int flag = 1, pointer = 0;
            while (pointer == 0 || keep[pointer - 1] != '\0' || words[i][pointer - 1] != '\0')
            {
                if (keep[pointer] != words[i][pointer])
                {
                    flag = 0;
                    break;
                }
                else
                {
                    pointer++;
                }
            }
            if (flag == 1)
            {
                address = i;
                count[address] += 1;
            }
        }
        if (address == -1)
        {
            strcpy(words[num], keep);
            count[num++] = 1;
        }
    }
    int maxd = 0, flag = -1;
    for (int i = 0; i < num; i++)
    {
        if (count[i] > maxd)
        {
            flag = i;
            maxd = count[i];
        }
    }
    printf("%s\n", words[flag]);
    return 0;
}