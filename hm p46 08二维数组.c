#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
      //数据类型 数组名[元素个数]={值1，值2};   一维
    /*数据类型 数组名[行数][列数] =
    {
        {值1,值2},
        {值3,值4}
    };*/
    //int arr[2][3] =
    //{
    //    {1,2,3},
    //    {4,5,6}
    //};
    //printf("%d\n", arr[0][1]);//2
    //printf("%d\n", arr[0][0]);//1
    // //输出数组全部元素
    //for (int i = 0; i < 2; i++)
    //{
    //    for (int j = 0; j < 3; j++)
    //    {
    //        printf("%d ", arr[i][j]);
    //    }
    //    printf("\n");
    //}
    //printf("二维数组大小：%d\n", sizeof(arr));
    //printf("二维数组一行大小：%d\n", sizeof(arr[0]));
    //printf("二维数组元素大小：%d\n", sizeof(arr[0][0]));

    //printf("二维数组行数：%d\n", sizeof(arr) / sizeof(arr[0]));
    //printf("二维数组列数：%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));

    // //二维数组首地址
    //printf("%p\n", arr);
    //printf("%p\n", arr[0]);
    ////printf("%p\n", arr[1]);
    //printf("%p\n", &arr[0][0]);
    //printf("%p\n", &arr[0][1]);

    //printf("\n");
    //for (int i = 0; i < 2; i++)
    //{
    //    for (int j = 0; j < 3; j++)
    //    {
    //        printf("%p\n", &arr[i][j]);
    //    }
    //}

    //二维数组初始化
    //int arr[2][3]={1,2,3,4,5,6};  
    //与int arr[2][3]={ {1,2,3},{4,5,6} };同理
    int arr[][3] = { 1,2,3,4,5,6,7 };//可以不写行，但得有列
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}