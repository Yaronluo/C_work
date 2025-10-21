#include <stdio.h>
int main()
{
    int arr1[3][5] = {0};
    printf("二维数组练习请输入15个数字\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d",&arr1[i][j]);//要取地址！！！
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d", arr1[i][j]);
        }
    }
    printf("\n");
    printf("一维数组练习请输入5个数字\n");
    int arr2[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr2[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}