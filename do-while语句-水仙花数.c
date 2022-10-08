#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 100;
	do
	{
		int d = a % 10;//个位
		int c = a / 10 % 10;//十位
		int b = a / 100;//百位
		if (a== b * b * b + c * c * c + d * d * d)
		{
			printf("%d 为水仙花数\n", a);
		}
		a++;
	} while (a <= 999);
}