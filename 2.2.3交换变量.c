#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 5;
	int b = 6;
	int t;
	t = a; //=5
	a = b; //=6
	b = t; //=5
	printf("a=%d,b=%d", a, b);
	return 0;
}