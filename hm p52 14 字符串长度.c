#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main1401()
{
      //strlen  
      //���ܣ�����ָ���ַ��� �ĳ���(��Ч���������������ַ���������'\0' 
    char ch[100] = "hello world";
    printf("�����С��%d\n", sizeof(ch));
    printf("�ַ������ȣ�%d", strlen(ch));
        
     return 0;
}

int main(void)
{
    char ch[] = "hello world";

    int len = 0;
    while (ch[len]!=0)  //while (ch[len]!=0)len++;  Ҳ����
    {
        len++;
    }
    printf("�ַ������ȣ�%d", len);
    return 0;
}