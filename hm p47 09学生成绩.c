#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
      //定义一个数组  存储五名学生三门成绩  arr[5][3]
    //求出每名学生的总成绩 平均成绩
    //求出每门学科的总成绩 平均成绩
    int arr[5][3];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    /*for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }*/
    
    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        printf("第%d名学生的总成绩为：%d\t平均成绩为：%.2f\n",i+1,sum,(double)sum/3.);  //%.2f 定义小数点后两位 3.=3.0
    }                                                                                   //(double)sum 改变sum的数据类型为浮点型
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum += arr[j][i];
        }
        printf("第%d门功课的总成绩为：%d\t平均成绩为：%d\n", i + 1, sum, sum / 5);
    }

     return 0;
}