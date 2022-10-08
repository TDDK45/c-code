#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    if (1582 <= n <= 2020)
    {
        if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    //三目运算符法： (更简洁）
    /*if (1582 <= n <= 2020) 
    {
       n = ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) ? 1 : 0;
       printf("%d",n);
     }*/

    return 0;
}