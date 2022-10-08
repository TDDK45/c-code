#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>

int main()
{
	//system("calc"); //system可以打开一个外部程序，若带路径使用\\或/
	int value;
	value = system("C:/Users/17844/Desktop/c++基本框架.txt ");
    //%d是一个占位符，表示输出一个整型数据
	printf("%d\n,value");
	return 0;
}
