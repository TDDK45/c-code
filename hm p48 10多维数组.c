#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main10()
{
      //��ά����
    //�������� ������[��][��][��]
    int arr[2][3][4] =
    {
        {
            {1,2,3,4},
            {2,3,4,5},
            {3,4,5,6},
        },
        {
            {4,5,6,7},
            {5,6,7,8},
            {6,7,8,9}
        }
    };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("��ά�����С��%d\n", sizeof(arr));
    printf("��ά���鵥���С��%d\n", sizeof(arr[0]));
    printf("��ά���鵥�д�С��%d\n", sizeof(arr[0][0]));
    printf("��ά���鵥Ԫ�ش�С��%d\n", sizeof(arr[0][0][0]));
    printf("����:%d\n", sizeof(arr) / sizeof(arr[0]));
    printf("����:%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
    printf("����:%d\n", sizeof(arr)[0][0] / sizeof(arr[0][0][0]));

     return 0;
}

int main(void)
{
    //��ά����
    int arr[2][3][4][5] =
    {
        {
            {
                {1,2,3,4,5},
                {2,3,4,5,6},
                {3,4,5,6,7},
                {4,5,6,7,8}
            },
            {
                {4,5,6,7,8},
                {5,6,7,8,9},
                {6,7,8,9,0},
                {7,8,9,0,1}
            },
            {
                {1,2,3,4,5},
                {2,3,4,5,6},
                {3,4,5,6,7},
                {4,5,6,7,8}
            }
        },
        {
            {
                {1,2,3,4,5},
                {2,3,4,5,6},
                {3,4,5,6,7},
                {4,5,6,7,8}
            },
            {
                {4,5,6,7,8},
                {5,6,7,8,9},
                {6,7,8,9,0},
                {7,8,9,0,1}
            },
            {
                {1,2,3,4,5},
                {2,3,4,5,6},
                {3,4,5,6,7},
                {4,5,6,7,8}
            }
        }
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                for (int l = 0; l < 5; l++) 
                { 
                    printf("%d ", arr[i][j][k][l]);
                }
                printf("\n");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}