#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void mystrcat(char *, char *);
void mystrdel(char *, char);
int main()
{
    char str1[100], str2[100], c;
    printf("�����������ַ���(����100����)��һ���ַ������е�һ��������ʵ��ƴ�ӣ��ַ���ɾȥƴ�Ӻ��ַ�����ĳһ����\n");
    gets(str1);
    gets(str2);
    c=getchar();
    //cout << "�����������ַ���(����100����)��һ���ַ������е�һ��������ʵ��ƴ�ӣ��ַ���ɾȥƴ�Ӻ��ַ�����ĳһ����" << endl;
    //cin >> str1 >> str2 >> c;
    mystrcat(str1, str2);
    printf("�����ַ����ֱ��ǣ�%s", str1);
    mystrdel(str1, c);
    printf("��%s\n", str1);
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