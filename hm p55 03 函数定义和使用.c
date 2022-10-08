#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

        //在不同函数中函数中的变量名可以重名，因为作用域不同
        // 
    //返回值类型 函数名（参数列表）
    //{
    //  代码体
    //  return 0;
    //}
    
    //在函数调用结束函数会在内存中销毁，只有调用时才占用内存 

        // 函数定义中参数称为形参（形式参数）  不能被赋值
        //若没形参，括号内容为void关键字
int add(int a, int b)
{
    int sum = a + b;
    return sum;
}       

int main5501(void)  //在函数调用过程中将实参传递给形参  
{
    int a = 10;
    int b = 20;
    int c;
    c = add(a, b); //在函数调用过程中，传递的参数称为实参，实际参数，有具体值
    printf("%d\n",c);
     return 0;
}

int strcmp(char ch1[], char ch2[])
{
    int i = 0;
    while (ch1[i]==ch2[i])
    {
        //判断字符串是否到结尾
        if (ch1[i] == 0)
        {
            return 0;
        }
        i++;
    }
    return ch1[i] > ch2[i] ? 1 : -1;
}

int main(void)
{
    char ch1[] = "hell";
    char ch2[] = "hall";

    int n = strcmp(ch1, ch2);
    if (n == 0)
    {
        printf("两个字符串一样");
    }
    else
    {
        printf("两个字符串不同");
    }
}










