#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	//作用：简单判断
	//语法：表达式1？表达式2：表达式3
	//解释：如果表达式1值为真，执行表达式2，并返回表达式2的结果
	//如果表达式1的值为假，执行表达式3，并返回表达式3的结果
	int a = 10;
	int b = 20;
	int c = 0;
	c = (a > b ? a : b);
	printf("c=%d\n",c);

	/*在C++中三目运算符返回的是变量，可以继续赋值,但C语言中不是*/
	//(a < b ? a : b) = 100;  不可赋值
	
	return 0;
}