#include <stdio.h>

void sort(int* pa,int sz)//一维数组传参的本质是传首元素地址
{
    int i = 0;
    for (i = 0;i < sz - 1;i++)//趟数
    {
        int flag = 0;//标志位
        int j = 0;
        for (j = 0;j < sz-i-1;j++)//数字前后对比交换
        {
            if (pa[j] > pa[j + 1])
            {
                flag = 1;
                int temp = pa[j];
                pa[j] = pa[j + 1];
                pa[j + 1] = temp;
            }
        }
        if (flag == 0)
        {
            printf("本身就已经排好了序列\n");
            break;
        }
    }
}

int main()
{
    int arr[10] = {0};
    int* p = arr;
    int n = 0;
    printf("请输入10个整数:\n");
    for (n = 0;n < 10;n++)
    {
        scanf("%d",p+n);
    }
    int i = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);
    printf("原排序");
    for (i = 0;i < sz;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    sort(arr,sz);
    printf("交换后排序\n");
    for (i = 0;i < sz;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}