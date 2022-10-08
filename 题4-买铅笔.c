#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
        int n = 0;
        int a1 = 0;
        int a2 = 0;
        int b1 = 0;
        int b2 = 0;
        int c1 = 0;
        int c2 = 0;

        scanf("%d", &n);
        scanf("%d %d", &a1, &a2);
        scanf("%d %d", &b1, &b2);
        scanf("%d %d", &c1, &c2);
        int d1, d2, d3;
        for (d1 = 1; d1 <= 10000; d1++)
        {
            if (a1 * d1 >= n) { break; }
        }
        for (d2 = 1; d2 <= 10000; d2++)
        {
            if (b1 * d2 >= n) { break; }
        }
        for (d3 = 1; d3 <= 10000; d3++)
        {
            if (c1 * d3 >= n) { break; }
        }

        if (a2 * d1 < b2 * d2 && a2 * d1 < c2 * d3)
        {
            printf("%d\n", a2 * d1);
        }
        if (b2 * d2 < a2 * d1 && b2 * d2 < c2 * d3)
        {
            printf("%d\n", b2 * d2);
        }
        if (c2 * d3 < b2 * d2 && c2 * d3 < a2 * d1)
        {
            printf("%d\n", c2 * d3);
        }
       if(a2*d1==b2*d2)
       {
           if (a2 * d1 <= c2 * d3){printf("%d", a2 * d1);}
           else{ printf("%d", c2 * d3); }
       }
       if (a2 * d1 == c2 * d3)
       {
           if (a2 * d1 < b2 * d2){printf("%d", a2 * d1);}
           if(a2 * d1 > b2 * d2) { printf("%d", b2 * d2); }
       }
       if (b2 * d2 == c2 * d3)
       {
           if (a2 * d1 < b2 * d2) { printf("%d", a2 * d1); }
           if (a2 * d1 > b2 * d2) { printf("%d", b2 * d2); }
       }
  
    return 0;
}