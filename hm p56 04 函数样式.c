#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include <stdlib.h>
int fun01()  //无参函数
{
    return rand() % 10;
}
void bubblesort(int arr[],int len) //冒泡排序函数  有参函数
{
    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len-1-i; j++)
        {
            if (arr[j+1] < arr[j])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

//void类型不能直接定义函数  void c=30;  //false
//void类型可以作为函数的返回值类型  表示没有返回值
int main(void)
{
    int arr[] = { 8,1,4,5,6,7,9,2,3 };
    bubblesort(arr, sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%d", arr[i]);
    }
    srand((unsigned int)time(NULL));
    fun01();
     return 0;
}