#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("给电影打分：");
	int a = 0;
	scanf("%d", &a);
	printf("您打的分数为：");
	
		switch (a)
		{
			case 10:case 9:
			printf("您认为是非常好的电影");
			break; //退出当前的分支
			
			case 8:case 7:
			printf("您认为是不错的电影");
			break; 
			case 6:case 5:
			printf("您认为是一般的电影");
			break; 
			default:
			printf("您认为是烂片"); 

			//if和switch区别：
			//switch缺点，判断时候只能是整型或字符型，不能是区间
			//switch优点，结构清晰，执行效率比if高
		}
	return 0;
}