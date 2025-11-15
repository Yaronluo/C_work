#include <stdio.h>

void input(char* p)
{
    while (*p)//当指针所指向的值不等于字符串结束符时循环
    {
        printf("%c",*p);//打印指针所指向的值
        p++;//指针加1，指向下一个字符
    }
    printf("\n");
}
int main()
{
    char name[] = "Hello, World!";//末尾自动添加'\0'结束符
    input(name);//传递字符串数组的地址
    return 0;
}