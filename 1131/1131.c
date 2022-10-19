#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100]={'\0'};
    int a[26]={0};
    gets(ch);
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]<97)
        {
            ch[i]+=32;
        }
        for(int j=0;j<26;j++)
        {
            if(j==ch[i]-97)
            {
                a[j]++;
            }
        }
    }
    int max=0,maxc=0;
    for(int i=0;i<26;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            maxc=i;
        }
    }
    char c;
    c=maxc+97;
    printf("%c",c);
    getchar();
    return 0;
}