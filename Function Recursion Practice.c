#include <stdio.h>

int Fact(int n)
{
    if (n == 0)
        return 1;
    else
    {
        n *= Fact(n - 1);
        return n;
    }
}
int main()
{
    int n = 0;
    printf("请输入数字");
    scanf("%d",&n);
    int a = Fact(n);
    printf("%d的阶乘为%d",n,a);
}