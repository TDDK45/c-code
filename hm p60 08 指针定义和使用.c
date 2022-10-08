#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void f(int* p)
{
    printf(" p=%p\n", p);
    printf("*p=%d\n", *p);
    *p = 26;
}
void g(int k)
{
    printf("k=%d\n", k);
}
int main(void)
{
    //int a = 0xaabbccdd; 
    ////a=100;
    //printf("%p\n", &a);
    
    int i = 6;
    printf("&i=%p\n", &i);
    f(&i);
    g(i);

     return 0;
}