#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//timeϵͳʱ��ͷ�ļ�����
#include <time.h>
#include<stdlib.h>

int main()
{
	//������������ ���ã����õ�ǰϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));

	//1��ϵͳ���������
	int num = rand() % 100 + 1;  //rand()%100 + 1 ���� 0+1~99+1 �����
	//printf("num"); 
	//2����ҽ��в²�
	int a =0;
	/*int b = 5;
	while (b--)   //�޶�5��*/
	while (1)
	{
		scanf("%d", &a);
		//3���ж���ҵĲ²�
		if (a > num)
		{
			printf("�´��ˣ����ֹ���\n");
			printf("������²�\n");
		}
		else if (a < num)
		{
			printf("�´��ˣ����ֹ�С\n");
			printf("������²�\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}

	}

	//�¶�  �˳���Ϸ
	//�´�  ��ʾ�µĽ�� ������С ���·��صڶ���

	
	return 0;
}