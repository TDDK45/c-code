#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int mol[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 }; //month of leap year ,����ÿ�µ�����
int moc[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; //month of common year,ƽ��ÿ�µ�����
char weekday[] = "һ\t��\t��\t��\t��\t��\t��";
void print_starline()   //��ӡ����
{
    for (int i = 0; i < 26; i++)
    {
        printf("* ");
    }
    printf("\n");
}
void print_line()   //��ӡ����
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
int leapyear(int year)//�ж��������1��ƽ��Ϊ0
{
    int n = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 1 : 0;
        return n;
}

int sum_day(int year,int month,int day,int mol[],int moc[])  //������1900.01.01��������
{
    int sum_dayofyear = 0;
    for (int i = 1900; i < year; i++)  //ȥ�굽1900��ÿ��������
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
    for (int i = 0; i < month-1; i++)  //�ϸ��µ�����1��ÿ��������
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
     return sum;//ǰ�߼���������ѹ�����
}

void print_rili(int sum, int year, int month, int day)  //��ӡ��������
{
    int kong = (sum-day+1) % 7; //1��ǰ�Ŀո���,ȥ������µ�����
    for (int i = 0; i < kong; i++)
    {
        printf("\t");
    }
    int firstday = 7 - kong;  //1�ŵ����յ�����
        for (int i = 1; i <= mol[month-1]; i++)  //i��1�ſ�ʼ
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
int outofday(int year, int month, int day, int mol[], int moc[]) //�ж�����������Ƿ���ڴ��µ�����
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
    printf("ע�⣺����������1900��1��1�տ�ʼ\n");
    while (opt1 != 0)
    {
        print_line();
        printf("����1������������\n");
        printf("����0���˳�������\n");
        print_line();
        printf("��ѡ��\n");
        scanf("%d", &opt1);

        switch (opt1)
        {
        case 1:
            printf("������ �� �� �գ��Կո��������2001 01 01����");
            scanf("%d %d %d", &year, &month, &day);  //���������գ���2001 01 01
            if (year < 1900 || month < 1 || month>12 || day < 1 || day>outofday(year, month, day, mol, moc))
            {
                printf("����������1900��1��1���Ժ���ȷ����\n");
                printf("\n");
            }
            else
            {
                print_starline();   //��ӡ����
                printf("\t\t%d �� %d ��\n", year, month);//��ӡ���������
                print_line();       //��ӡ����
                print_weekday(weekday);//��ӡ����
                print_line();       //��ӡ����
                int sum = sum_day(year, month, day, mol, moc); //���������������1900.1.1��������
                print_rili(sum, year, month, day);//��ӡ��������
                printf("\n");
                printf("\n");
                print_line();       //��ӡ����
            }
            break;
        case 0:
            printf("�˳�����");
            break;
        default:
            printf("������ѡ������1��0\n");
            break;
        }
    }
    return 0;
}

