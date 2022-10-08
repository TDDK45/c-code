#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 1;
	while (a < 100)
	{
		//逢个位、十位含7或者是7的倍数的数字就敲桌子
		if (a % 7 == 0 || a % 10 == 7||a/10==7)
		{
			printf("敲桌子\n");
		}
		else
		{
			printf("%d\n", a);
		}
		a++;
	}
	return 0;
}