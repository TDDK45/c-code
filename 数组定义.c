#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main0202()
{
    //数组定义：数据类型 数组名[元素类型]={值1，值2，值3};
    //数组元素必须是常量或常量表达式
    int arr[10] = { 9,4,2,1,8,5,3,6,10,7 };
      //int arr[] = { 9,4,2,1,8,5,3,6,10,7 };
    //int arr[10]={1,2,3,4,5};  //后面没赋值的为0

    //数组下标  数组名[下标]
    //数组下标是从零开始的到数组元素个数减1
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}

//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    //数组元素参与计算
//    /*arr[3] = arr[5];
//    arr[2] = arr[3] * 2;
//
//    for (int i = 0; i < 10; i++)
//    {
//        printf("%d\n", arr[i]);
//    }*/
//  
//    //数组在内存中存储方式和大小
//    //下标为0的元素地址  
//    //&为取地址符  %p用来以16进制打印地址
//    printf("%p\n", &arr[0]);
//    printf("%p\n", &arr[1]);
//    printf("%p\n", &arr[2]);
//    printf("%p\n", &arr[3]);
//    printf("%p\n", &arr[4]);
//    
//
//
//    return 0;
//}


