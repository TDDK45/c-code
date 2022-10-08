#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{   //外层控制行，内层控制列
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d × %d = %d   ", j, i, i * j);
        }
        printf("\n\n");
    }
    printf("\n");



    for (int i = 9; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d × %d = %d   ", j, i, j * i);
        }
        printf("\n\n");
    }
    return 0;
}