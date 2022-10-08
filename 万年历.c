#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int mol[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 }; //month of leap year ,闰年每月的天数
int moc[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; //month of common year,平年每月的天数
char weekday[] = "一\t二\t三\t四\t五\t六\t日";
void print_starline()   //打印星线
{
    for (int i = 0; i < 26; i++)
    {
        printf("* ");
    }
    printf("\n");
}
void print_line()   //打印虚线
{
    for (int i = 0; i < 26; i++)
    {
        printf("- ");
    }
    printf("\n");
}
void print_weekday(char weekday[])
{
    
        printf("%s\t", weekday);
        printf("\n");
        
}
int leapyear(int year)//判断闰年输出1，平年为0
{
    int n = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 1 : 0;
        return n;
}

int sum_day(int year,int month,int day,int mol[],int moc[])  //此日与1900.01.01的天数差
{
    int sum_dayofyear = 0;
    for (int i = 1900; i < year; i++)  //去年到1900年每年天数和
    {
        if (leapyear(i) == 1)
        {
            sum_dayofyear += 366;
        }
        if (leapyear(i) == 0)
        {
            sum_dayofyear += 365;
        }
    }

    int sum_dayofmonth = 0;
    for (int i = 0; i < month-1; i++)  //上个月到今年1月每月天数和
    {
            if (leapyear(year)==1)
            {
                sum_dayofmonth += mol[i];
            }
            if (leapyear(year) == 0)
            {
                sum_dayofmonth += moc[i];
            }
    }
     int sum = sum_dayofyear + sum_dayofmonth + day - 1;
     return sum;//前者加上这个月已过天数
}

void print_rili(int sum, int year, int month, int day)  //打印日历主体
{
    int kong = (sum-day+1) % 7; //1号前的空格数,去除这个月的天数
    for (int i = 0; i < kong; i++)
    {
        printf("\t");
    }
    int firstday = 7 - kong;  //1号到周日的天数
        for (int i = 1; i <= mol[month-1]; i++)  //i从1号开始
        {
            
            if (i == day)
            {
                printf("*%d\t", i);
            }
            else
            {
                printf("%d\t", i);
            }
            if (i == firstday||(i-firstday)%7==0)
            {
                printf("\n");
                printf("\n");
            }
        }
}
int outofday(int year, int month, int day, int mol[], int moc[]) //判断输入的日期是否大于此月的天数
{
    if (leapyear(year) == 1)
    {
        if (day > mol[month - 1])
        {
            return mol[month - 1];
        }
    }
    else
    {
        if (day > moc[month - 1])
        {
            return moc[month - 1];
        }
    }
}
int main()
{
    int year, month, day;
    int opt1 = -1;
    printf("注意：本万年历从1900年1月1日开始\n");
    while (opt1 != 0)
    {
        print_line();
        printf("按“1”启用万年历\n");
        printf("按“0”退出万年历\n");
        print_line();
        printf("请选择：\n");
        scanf("%d", &opt1);

        switch (opt1)
        {
        case 1:
            printf("请输入 年 月 日（以空格隔开，如2001 01 01）：");
            scanf("%d %d %d", &year, &month, &day);  //输入年月日，如2001 01 01
            if (year < 1900 || month < 1 || month>12 || day < 1 || day>outofday(year, month, day, mol, moc))
            {
                printf("错误！请输入1900年1月1号以后正确日期\n");
                printf("\n");
            }
            else
            {
                print_starline();   //打印星线
                printf("\t\t%d 年 %d 月\n", year, month);//打印输入的年月
                print_line();       //打印虚线
                print_weekday(weekday);//打印星期
                print_line();       //打印虚线
                int sum = sum_day(year, month, day, mol, moc); //计算输入的日期与1900.1.1相差的天数
                print_rili(sum, year, month, day);//打印日历主体
                printf("\n");
                printf("\n");
                print_line();       //打印虚线
            }
            break;
        case 0:
            printf("退出程序");
            break;
        default:
            printf("请重新选择，输入1或0\n");
            break;
        }
    }
    return 0;
}

