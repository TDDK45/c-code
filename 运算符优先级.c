#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	/*int a = 0; int b = 0;
	printf("请输入两个整数以求平均值：");
	scanf("%d,%d", &a, &b);
	float c = (a+b)/2.0;
	printf("平均值为：%f\n",c);*/

	int x = 0;
	printf("请输入存入的本金：");
	scanf("%d", &x);
	double d = x * (1 + 0.033) * (1 + 0.033) * (1 + 0.033);

	printf("3年后可得本息余额：%lf", d-x);
	

	return 0;
}