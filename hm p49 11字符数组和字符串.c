#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main1101()
{
      //定义字符数组
    //char arr[] = { 110,111,112,113,114,0 };  //ASCII编码代替字符
    //char arr[5]={'a','b','c','d','e'};
    //printf("%d\n", sizeof(arr));

    //字符串    
    //char * ch = "abcde"; 
    //char ch[] = "abcde";
    char ch[] = { 'a','b','c','d','e',0};  //与char ch[] = { 'a','b','c','d','e','\0'};一致
    //字符串结束标志为\0  数字0等同于\0  但是不等同于'0'
    printf("%s\n", ch);   //%s 输出字符串
    /*for (int i = 0; i < sizeof(arr)/sizeof(arr[i]); i++)
    {
        printf("%c", arr[i]);
    }*/
     return 0;
}

int main1102()
{
    //定义字符数组存储字符串
    char ch[11];  
    scanf("%s", ch);  //实际只能输入10个，\0占一位   
    // scanf("%10s", ch);  可限定输入的多少，以防报错
    printf("%s", ch);
    return 0;
}

int main(void)
{
    //字符串拼接
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