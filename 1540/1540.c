#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    getchar();
    int a[5] = {0};
    int m = n;
    for (int i = 0; i < 100; i++)
    {
        if (n >= 6 && a[4] != 1)
        {
            if (n >= 36 && a[3] != 1)
            {
                if (n >= 108 && a[2] != 1)
                {
                    if (n >= 324 && a[1] != 1)
                    {
                        if (n >= 648 && a[0] != 1)
                        {
                            m += 108;
                            n -= 648;
                            a[0] = 1;
                        }
                        else
                        {
                            m += 54;
                            n -= 324;
                            a[1] = 1;
                        }
                    }
                    else
                    {
                        m += 18;
                        n -= 108;
                        a[2] = 1;
                    }
                }
                else
                {
                    m += 6;
                    n -= 36;
                    a[3] = 1;
                }
            }
            else
            {
                m += 1;
                n -= 6;
                a[4] = 1;
            }
        }
        else
        {
            break;
        }
    }
    printf("%d", m);
    getchar();
    return 0;
}