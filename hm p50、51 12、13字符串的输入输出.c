#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main1201()
{
    char ch[100];

    //ͨ�����̻�ȡ�ַ���
    //gets �����ַ������Դ��ո�
    gets(ch);
    //scanf("%[^\n]", ch);   //%[^\n]  ͨ��������ʽ ��ȡ���ո���ַ���
    printf("%s\n", ch);
     return 0;
}

int main1202(void)
{
    char ch[10];
    fgets(ch, sizeof(ch), stdin);  /*fgets���Խ��տո� �ո�ռһ���ֽڣ�����\nռһ���ֽ�
                                    ����ȡ���ַ�������Ԫ�ظ�������\n��  fgets��gets���ļ���������*/

    printf("%s", ch);
}

int main(void)
{
    char ch[] = "hello world";
    puts(ch);  //puts����Դ�����\n
    puts("");  //���в���
    fputs(ch, stdout);  //�൱��printf("%s",ch); ��������  fputs��puts���ļ��������
    printf("%s", ch);
    return 0;
}