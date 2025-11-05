#include <stdio.h>
#include <string.h>

int main ()
{
    char arr[10] = {0};
    //scanf("%s",arr);//不要取地址&，因为arr本身就是地址，不要用空格将输入的数字隔开，否则会被认为是多个字符串。
    for (int i = 0; i < 10; i++)
    {
        scanf("%s",&arr[i]);
    }
    int len = strlen(arr);//strlen计算的是字符串实际字符数
    for (int i = 0; i < len; i++)
    {
     printf("%c", arr[i]);
    }
     printf("\n");
     printf("%s\n", arr);
     return 0;
}

