#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("����Ӱ��֣�");
	int a = 0;
	scanf("%d", &a);
	printf("����ķ���Ϊ��");
	
		switch (a)
		{
			case 10:case 9:
			printf("����Ϊ�Ƿǳ��õĵ�Ӱ");
			break; //�˳���ǰ�ķ�֧
			
			case 8:case 7:
			printf("����Ϊ�ǲ���ĵ�Ӱ");
			break; 
			case 6:case 5:
			printf("����Ϊ��һ��ĵ�Ӱ");
			break; 
			default:
			printf("����Ϊ����Ƭ"); 

			//if��switch����
			//switchȱ�㣬�ж�ʱ��ֻ�������ͻ��ַ��ͣ�����������
			//switch�ŵ㣬�ṹ������ִ��Ч�ʱ�if��
		}
	return 0;
}