#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int a = 0;
    printf("��������ķ�����");
    scanf("%d", &a);
    if (a >= 440)
    {
        if (a > 600)
        {
            printf("��ϲ���ܿ��ϱ���ͨ�ر����õĴ�ѧ");
        }
        else if (a > 538)
        {
            printf("��ϲ���ܿ����ر�");
        }
        else { printf("��ϲ���ܿ��ϱ���"); }
    }
    else if (a >= 200)
    {
        printf("��ϲ����Ե���ר��");
    }
    else
    {
        printf("��ϲ�����ֱ�ӵ��������");
    }
    return 0;
}