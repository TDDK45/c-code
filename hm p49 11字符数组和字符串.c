#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main1101()
{
      //�����ַ�����
    //char arr[] = { 110,111,112,113,114,0 };  //ASCII��������ַ�
    //char arr[5]={'a','b','c','d','e'};
    //printf("%d\n", sizeof(arr));

    //�ַ���    
    //char * ch = "abcde"; 
    //char ch[] = "abcde";
    char ch[] = { 'a','b','c','d','e',0};  //��char ch[] = { 'a','b','c','d','e','\0'};һ��
    //�ַ���������־Ϊ\0  ����0��ͬ��\0  ���ǲ���ͬ��'0'
    printf("%s\n", ch);   //%s ����ַ���
    /*for (int i = 0; i < sizeof(arr)/sizeof(arr[i]); i++)
    {
        printf("%c", arr[i]);
    }*/
     return 0;
}

int main1102()
{
    //�����ַ�����洢�ַ���
    char ch[11];  
    scanf("%s", ch);  //ʵ��ֻ������10����\0ռһλ   
    // scanf("%10s", ch);  ���޶�����Ķ��٣��Է�����
    printf("%s", ch);
    return 0;
}

int main(void)
{
    //�ַ���ƴ��
    char ch1[] = "hello";
    char ch2[] = "world";
    char ch3[20];

    int i = 0;
    int j = 0;
    while (ch1[i] != '\0')
    {
        ch3[i] = ch1[i];
        i++;
    }
    while (ch2[j] != '\0')
    {
        ch3[i+j] = ch2[j];
        j++;
    }
    ch3[i + j] = 0;  //  ='0';
    printf("%s", ch3);
}