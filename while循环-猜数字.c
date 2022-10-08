#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//time系统时间头文件包含
#include <time.h>
#include<stdlib.h>

int main()
{
	//添加随机数种子 作用：利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));

	//1、系统生成随机数
	int num = rand() % 100 + 1;  //rand()%100 + 1 生成 0+1~99+1 随机数
	//printf("num"); 
	//2、玩家进行猜测
	int a =0;
	/*int b = 5;
	while (b--)   //限定5次*/
	while (1)
	{
		scanf("%d", &a);
		//3、判断玩家的猜测
		if (a > num)
		{
			printf("猜错了，数字过大\n");
			printf("请继续猜测\n");
		}
		else if (a < num)
		{
			printf("猜错了，数字过小\n");
			printf("请继续猜测\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}

	}

	//猜对  退出游戏
	//猜错  提示猜的结果 过大或过小 重新返回第二步

	
	return 0;
}