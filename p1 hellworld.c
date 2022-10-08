#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>  
/*导入一个内容， stdio.h是一个标准库
i input o output 标准输入输出库 .h 头文件
<>表示导入系统文件 ""表示导入自定义文件
*/

int main01(void)  /*（）里面表示函数的参数 函数的参数可以有多个，
			用逗号分隔*/
{   //{}函数体 代码体 程序体
	printf("hello world\n");  
		return 0; 
		/*return若出现在其他函数中，表示函数结束，
		若出现在main函数中表示程序结束
		0 表示函数的返回值，要和函数返回值类型对应*/
}