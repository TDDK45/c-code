#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int arr[] = { 9,1,5,7,2,10,8,4,6,3 };
    //��������
    for (int i = 0; i < 10 - 1; i++)
    {   //�ڲ������
        for (int j = 0; j < 10-1-i; j++)
        {   //�Ƚ�����Ԫ�أ�������������
            if (arr[j] > arr[j + 1])  // > Ϊ����< Ϊ����
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int a = 0; a < 10; a++)
    {
        printf("%d ", arr[a]);
    }
     return 0;
}