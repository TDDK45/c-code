#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 1;
	while (a < 100)
	{
		//���λ��ʮλ��7������7�ı��������־�������
		if (a % 7 == 0 || a % 10 == 7||a/10==7)
		{
			printf("������\n");
		}
		else
		{
			printf("%d\n", a);
		}
		a++;
	}
	return 0;
}