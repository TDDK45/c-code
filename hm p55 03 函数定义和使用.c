#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

        //�ڲ�ͬ�����к����еı�����������������Ϊ������ͬ
        // 
    //����ֵ���� �������������б�
    //{
    //  ������
    //  return 0;
    //}
    
    //�ں������ý������������ڴ������٣�ֻ�е���ʱ��ռ���ڴ� 

        // ���������в�����Ϊ�βΣ���ʽ������  ���ܱ���ֵ
        //��û�βΣ���������Ϊvoid�ؼ���
int add(int a, int b)
{
    int sum = a + b;
    return sum;
}       

int main5501(void)  //�ں������ù����н�ʵ�δ��ݸ��β�  
{
    int a = 10;
    int b = 20;
    int c;
    c = add(a, b); //�ں������ù����У����ݵĲ�����Ϊʵ�Σ�ʵ�ʲ������о���ֵ
    printf("%d\n",c);
     return 0;
}

int strcmp(char ch1[], char ch2[])
{
    int i = 0;
    while (ch1[i]==ch2[i])
    {
        //�ж��ַ����Ƿ񵽽�β
        if (ch1[i] == 0)
        {
            return 0;
        }
        i++;
    }
    return ch1[i] > ch2[i] ? 1 : -1;
}

int main(void)
{
    char ch1[] = "hell";
    char ch2[] = "hall";

    int n = strcmp(ch1, ch2);
    if (n == 0)
    {
        printf("�����ַ���һ��");
    }
    else
    {
        printf("�����ַ�����ͬ");
    }
}










