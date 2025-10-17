#include <stdio.h>
int main()
{
    do
    {
        char sign;
        double firstnumber, secondnumber;
        printf("------请输入计算符号(+,-,/,*)------\n");
        printf("  ------输入q可以退出计算器------\n");
        scanf(" %c",&sign);//%c前面要加空格，清空或跳过输入缓冲区中的空白字符
        if (sign == 'q')
        {
            printf("程序已经退出");
            break;
        }
        printf("请输入第一个数字和第二个数字");
        scanf("%lf%lf",&firstnumber,&secondnumber);
        if (secondnumber == 0 &&sign == '/')
        {
            printf("计算失败零不可以作除数");//为了防止0除任何数字程序错误
        }
        else
        {
            switch (sign)//符号不同所采取的计算方式也不同
            {
            case '+':
                printf("%.2lf+%.2lf=%.2lf\n",firstnumber,secondnumber,firstnumber+secondnumber);
                break;
            case '-':
                printf("%.2lf-%.2lf=%.2lf\n",firstnumber,secondnumber,firstnumber-secondnumber);
                break;
            case '*':
                printf("%.2lf*%.2lf=%.2lf\n",firstnumber,secondnumber,firstnumber*secondnumber);
                break;
            case '/':
                printf("%.2lf/%.2lf=%.2lf\n",firstnumber,secondnumber,firstnumber/secondnumber);
                break;
            default:
                printf("  =====请输入正确的计算符号=====\n\n");
            }
        }
    }while(1);
    return 0;
}