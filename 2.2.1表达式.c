#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{	//计算时间差
	int hour1,min1;
	int hour2,min2;
	printf("请输入时间1：");
	scanf("%d,%d", &hour1, &min1);
	printf("请输入时间2：");
	scanf("%d,%d", &hour2, &min2);
	int t1 = hour1 * 60 + min1;
	int t2 = hour2 * 60 + min2;
	int t = t1 - t2;
	printf("时间差为%d小时%d分\n",t/60,t%60);

	return 0;
}