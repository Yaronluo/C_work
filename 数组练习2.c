#include <stdio.h>
#include <string.h>

int main ()
{
    char arr[10] = {0};
    //scanf("%s",arr);//不要取地址
    for (int i = 0; i < strlen(arr); i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < strlen(arr); i++)//strlen只能用于字符数组
    {
     printf("%c", arr[i]);
    }
     printf("\n");
     printf("%s\n", arr);
     return 0;
}

