#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define SIZE 10
int main()
{
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("最重的小猪体重：%d\n", max);
     return 0;
}