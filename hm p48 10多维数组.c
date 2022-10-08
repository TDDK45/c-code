#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main10()
{
      //三维数组
    //数据类型 数组名[层][行][列]
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

    printf("三维数组大小：%d\n", sizeof(arr));
    printf("三维数组单层大小：%d\n", sizeof(arr[0]));
    printf("三维数组单行大小：%d\n", sizeof(arr[0][0]));
    printf("三维数组单元素大小：%d\n", sizeof(arr[0][0][0]));
    printf("层数:%d\n", sizeof(arr) / sizeof(arr[0]));
    printf("行数:%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
    printf("列数:%d\n", sizeof(arr)[0][0] / sizeof(arr[0][0][0]));

     return 0;
}

int main(void)
{
    //四维数组
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