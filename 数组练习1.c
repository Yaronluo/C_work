#include <stdio.h>
#include <windows.h>//休眠的头文件
int main()
{
    char arr1[] = {"hi,welcome!!!"};
    char arr2[] = {"*************"};
    int left = 0;
    int right = sizeof(arr1)/sizeof(arr1[0])-1;
    while (left <= right)
    {
       arr2[left] = arr1[left];
       arr2[right] = arr1[right];
       printf("%s\n",arr2);
       Sleep (1000);//休眠单位是毫秒
       right--;
       left++;
    }
    return 0;
}