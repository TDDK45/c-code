#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int mhave = 0;
    int mcost[12];
    int mx,mon;
    int mz = 0;//Õû°ÙÊý
    int a = 1;
    for (int i = 0; i < 12; i++)
    {
        scanf("%d", &mcost[i]);
    }
    for (int i = 0; i < 12; i++)
    {
        mhave += 300;
        mx = mhave - mcost[i];
        mz += mx / 100;
        mx -= mx / 100 * 100;
        mhave = mx;
        
        if (mhave<0)
        {
            a = 0;
            mon = i + 1;
            break;
        }
        else { a = 1; }
    }
    if (a == 1)
    {
        printf("%d\n", mz*120+mhave);
    }
    else
    {
        printf("-%d", mon);
    }
    return 0;
}
