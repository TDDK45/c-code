#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 100;
	do
	{
		int d = a % 10;//��λ
		int c = a / 10 % 10;//ʮλ
		int b = a / 100;//��λ
		if (a== b * b * b + c * c * c + d * d * d)
		{
			printf("%d Ϊˮ�ɻ���\n", a);
		}
		a++;
	} while (a <= 999);
}