#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{	//����ʱ���
	int hour1,min1;
	int hour2,min2;
	printf("������ʱ��1��");
	scanf("%d,%d", &hour1, &min1);
	printf("������ʱ��2��");
	scanf("%d,%d", &hour2, &min2);
	int t1 = hour1 * 60 + min1;
	int t2 = hour2 * 60 + min2;
	int t = t1 - t2;
	printf("ʱ���Ϊ%dСʱ%d��\n",t/60,t%60);

	return 0;
}