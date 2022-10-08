#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int i, j, k;
    int s = 0;
    for (i = a; i <= a + 3; i++)
    {
        for (j = a; j <= a + 3; j++)
        {
            for (k = a; k <= a + 3; k++)
            {
                if (a <= 6 && i != j && i != k && j != k)
                {
                    s++;
                    printf("%d%d%d", i, j, k);

                    if (s == 6)
                    {
                        printf("\n");
                        s = 0;
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
    }
    return 0;
}