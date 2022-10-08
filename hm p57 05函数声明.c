#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*函数声明
  函数定义
  函数调用
    （三步）*/

//函数声明  extern关键字可以省略，括号内只需数据类型
//广义上定义是声明的一个特例  声明不需要建立存储空间，定义需要
int add01(int,int);
//extern int add01(int a, int b);  //完整版
int main()
{
    printf("%d", add01(10, 20));
     return 0;
}
int add01(int a, int b)
{
    return a + b;
}