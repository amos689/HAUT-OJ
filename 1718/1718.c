#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void mystrcat(char *, char *);
void mystrdel(char *, char);
int main()
{
    char str1[100], str2[100], c;
    printf("请输入两个字符串(长度100以内)和一个字符，其中第一、二个将实现拼接，字符将删去拼接后字符串的某一部分\n");
    gets(str1);
    gets(str2);
    c=getchar();
    //cout << "请输入两个字符串(长度100以内)和一个字符，其中第一、二个将实现拼接，字符将删去拼接后字符串的某一部分" << endl;
    //cin >> str1 >> str2 >> c;
    mystrcat(str1, str2);
    printf("两个字符串分别是：%s", str1);
    mystrdel(str1, c);
    printf("和%s\n", str1);
    strcat(str1, str2);
    printf("%s", str1);
    system("pause");
    return 0;
}
void mystrcat(char *p1, char *p2)
{
    while (*p1 != '\0')
    {
        p1++;
    }
    for (int i = 0; i < strlen(p2); i++)
    {

        *p1 = p2[i];
        p1++;
    }
    return;
}
void mystrdel(char *p, char c)
{
    int i, j;
    for (i = j = 0; p[i] != '\0'; i++)
    {
        if (p[i] != c)
        {
            p[j++] = p[i];
        }
    }
    p[j] = '\0';
    return;
}