#include <stdio.h>
         int main()
         {
             char sign;
             double firstnumber, secondnumber;
             printf("请输入计算符号(+,-,/,*)");
             scanf("%c",&sign);
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
                     printf("%lf+%lf=%lf\n",firstnumber,secondnumber,firstnumber+secondnumber);
                     break;
                 case '-':
                     printf("%lf-%lf=%lf\n",firstnumber,secondnumber,firstnumber-secondnumber);
                     break;
                 case '*':
                     printf("%lf*%lf=%lf\n",firstnumber,secondnumber,firstnumber*secondnumber);
                     break;
                 case '/':
                     printf("%lf/%lf=%lf\n",firstnumber,secondnumber,firstnumber/secondnumber);
                     break;

                 }
             }

         return 0;}