#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
      //����һ������  �洢����ѧ�����ųɼ�  arr[5][3]
    //���ÿ��ѧ�����ܳɼ� ƽ���ɼ�
    //���ÿ��ѧ�Ƶ��ܳɼ� ƽ���ɼ�
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
        printf("��%d��ѧ�����ܳɼ�Ϊ��%d\tƽ���ɼ�Ϊ��%.2f\n",i+1,sum,(double)sum/3.);  //%.2f ����С�������λ 3.=3.0
    }                                                                                   //(double)sum �ı�sum����������Ϊ������
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum += arr[j][i];
        }
        printf("��%d�Ź��ε��ܳɼ�Ϊ��%d\tƽ���ɼ�Ϊ��%d\n", i + 1, sum, sum / 5);
    }

     return 0;
}