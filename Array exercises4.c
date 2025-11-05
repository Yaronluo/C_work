#include <stdio.h>


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int left = 0;
    //int right = strlen(arr)-1;
    int right = sizeof(arr)/sizeof(arr[0])-1;//sizeof计算数组总字节数，因此要除以一个元素的字节数，就等于元素个数
    int number = 0;
    printf("请输入任意一个1~10的数字");
    do
    {
        scanf("%d",&number);
        if (number > 10||number<1)
        {
            printf("请输入正确的数字");
        }
        else
        {
            break;
        }
    }while(1);
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == number)
        {
            printf("这个数字的下标是%d",mid);
            break;
        }
        else if (arr[mid] < number)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return 0;
}
