#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*��������
  ��������
  ��������
    ��������*/

//��������  extern�ؼ��ֿ���ʡ�ԣ�������ֻ����������
//�����϶�����������һ������  ��������Ҫ�����洢�ռ䣬������Ҫ
int add01(int,int);
//extern int add01(int a, int b);  //������
int main()
{
    printf("%d", add01(10, 20));
     return 0;
}
int add01(int a, int b)
{
    return a + b;
}