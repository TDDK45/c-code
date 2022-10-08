#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main1201()
{
    char ch[100];

    //通过键盘获取字符串
    //gets 接收字符串可以带空格
    gets(ch);
    //scanf("%[^\n]", ch);   //%[^\n]  通过正则表达式 获取带空格的字符串
    printf("%s\n", ch);
     return 0;
}

int main1202(void)
{
    char ch[10];
    fgets(ch, sizeof(ch), stdin);  /*fgets可以接收空格 空格占一个字节，换行\n占一个字节
                                    （获取的字符串少于元素个数会有\n）  fgets是gets的文件输入类型*/

    printf("%s", ch);
}

int main(void)
{
    char ch[] = "hello world";
    puts(ch);  //puts输出自带换行\n
    puts("");  //换行操作
    fputs(ch, stdout);  //相当于printf("%s",ch); 不带换行  fputs是puts的文件输出类型
    printf("%s", ch);
    return 0;
}