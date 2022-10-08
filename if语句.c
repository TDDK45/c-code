#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int a = 0;
    printf("请输入你的分数：");
    scanf("%d", &a);
    if (a >= 440)
    {
        if (a > 600)
        {
            printf("恭喜你能考上比普通重本更好的大学");
        }
        else if (a > 538)
        {
            printf("恭喜你能考上重本");
        }
        else { printf("恭喜你能考上本科"); }
    }
    else if (a >= 200)
    {
        printf("恭喜你可以当带专人");
    }
    else
    {
        printf("恭喜你可以直接当社会人了");
    }
    return 0;
}