#include <stdio.h>
int main()
{
    //const int a = 10;//const可以使常量变为常变量，因此不能修改其值
    //a =20;//错误，不能修改常量的值
    int a =10;
    //const int* p = &a;//指向常量的指针，不能通过指针修改变量的值，但可以修改指针的值
    //int* const p = &a;//指针常量，指针的值不能修改，但可以通过指针修改变量的值
    int* p = &a;//普通指针，指针的值和变量的值都可以修改
    *p =20;//通过指针修改变量的值
    printf("a = %d",a);
    return 0;
}