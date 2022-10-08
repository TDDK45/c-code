#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main1401()
{
      //strlen  
      //功能：计算指定字符串 的长度(有效个数），不包含字符串结束符'\0' 
    char ch[100] = "hello world";
    printf("数组大小：%d\n", sizeof(ch));
    printf("字符串长度：%d", strlen(ch));
        
     return 0;
}

int main(void)
{
    char ch[] = "hello world";

    int len = 0;
    while (ch[len]!=0)  //while (ch[len]!=0)len++;  也可以
    {
        len++;
    }
    printf("字符串长度：%d", len);
    return 0;
}