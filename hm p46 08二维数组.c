#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
      //�������� ������[Ԫ�ظ���]={ֵ1��ֵ2};   һά
    /*�������� ������[����][����] =
    {
        {ֵ1,ֵ2},
        {ֵ3,ֵ4}
    };*/
    //int arr[2][3] =
    //{
    //    {1,2,3},
    //    {4,5,6}
    //};
    //printf("%d\n", arr[0][1]);//2
    //printf("%d\n", arr[0][0]);//1
    // //�������ȫ��Ԫ��
    //for (int i = 0; i < 2; i++)
    //{
    //    for (int j = 0; j < 3; j++)
    //    {
    //        printf("%d ", arr[i][j]);
    //    }
    //    printf("\n");
    //}
    //printf("��ά�����С��%d\n", sizeof(arr));
    //printf("��ά����һ�д�С��%d\n", sizeof(arr[0]));
    //printf("��ά����Ԫ�ش�С��%d\n", sizeof(arr[0][0]));

    //printf("��ά����������%d\n", sizeof(arr) / sizeof(arr[0]));
    //printf("��ά����������%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));

    // //��ά�����׵�ַ
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

    //��ά�����ʼ��
    //int arr[2][3]={1,2,3,4,5,6};  
    //��int arr[2][3]={ {1,2,3},{4,5,6} };ͬ��
    int arr[][3] = { 1,2,3,4,5,6,7 };//���Բ�д�У���������
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