#include <stdio.h>
int  main()
{
    int a = 0;
    int *p = &a;//指针变量p存放变量a的地址,
    printf("a的地址是%p\n",p);
    printf("a的地址是%p\n",&a);
    *p = 10;//*p表示取指针变量p所指向的地址中的值，所有*p = a
    printf("a的值是%d\n",a);
    printf("a的值是%d\n",*p);
    return 0;
}