#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	/*int a = 0; int b = 0;
	printf("������������������ƽ��ֵ��");
	scanf("%d,%d", &a, &b);
	float c = (a+b)/2.0;
	printf("ƽ��ֵΪ��%f\n",c);*/

	int x = 0;
	printf("���������ı���");
	scanf("%d", &x);
	double d = x * (1 + 0.033) * (1 + 0.033) * (1 + 0.033);

	printf("3���ɵñ�Ϣ��%lf", d-x);
	

	return 0;
}