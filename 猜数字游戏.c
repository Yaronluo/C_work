#include <stdio.h>
#include <stdlib.h>//rand函数和srand函数头文件
#include <time.h>//time函数的头文件
int n = 10;
void game ()//game函数引用
{
    printf("注意你只有%d次机会哦!!!\n",n);
    int number = rand() % 100 + 1;//产生随机数，不能放在while循环内，否则会不断随机
    for (int times = 1; times <= n; times++)
    {
        printf("---第%d次---\n",times);
        int input = 0;
        printf("请输入一个数字(1~100)\n");
        scanf("%d",&input);
        if (input > 100 || input <= 0)
        {
            printf("请输入正确的数字,不消耗次数\n");
            times--;
            continue;//当满足if条件时，continue之后的命令不执行，直接下一个循环
        }
        if (input > number)
        {
            printf("---猜大了---\n\n");
        }
        else if (input < number)
        {
            printf("---猜小了---\n\n");
        }
        else
        {
            printf("恭喜你猜对了!!!\n\n");
            break;
        }
        if (times == n && number != input)//次数用尽显示的画面
        {
            printf(" 《===次数已用尽===》\n");
            printf("《===正确答案是%d===》\n",number);
            printf(" 《===再玩一次吧===》\n\n");
        }
    }
}
void setting()//设置函数引用
{
     int set = 0;
     printf("----------------------\n");
     printf("-------简单模式1-------\n");
     printf("-------普通模式2-------\n");
     printf("-------困难模式3-------\n");
     printf("--请输入模式后对应的数字--\n");
     printf("----------------------\n");
     scanf("%d",&set);
     switch (set)
     {
     case 1:
         n = 15;
         printf("你选择了简单模式\n");
         break;
     case 2:
         n = 10;
         printf("你选择了普通模式\n");
         break;
     case 3:
         n = 5;
         printf("你选择了困难模式\n");
         break;
     }
}
int main()
{
    srand((unsigned int)time(NULL));//使种子随机不至于导致每次生成的随机数相同，不需要放在循环中，不然会一直改变种子，没必要！而且会有小bug
    int sign = 0;
    printf("==欢迎游玩猜数字游戏==\n");
    printf(" ==默认为普通难度==\n");
    do
    {
        printf("------------------------\n");
        printf("------开始游戏请输入1------\n");
        printf("------退出游戏请输入0------\n");
        printf("------难度设置请输入2------\n");
        printf("------------------------\n");
        scanf("%d",&sign);
        switch (sign)
        {
        case 1:
            game();//引用函数game
            break;
        case 0:
            printf("欢迎下次游玩");
            break;
        case 2:
            setting();
            break;
        default:
            printf("请输入正确的数字!!!");
            break;
        }
    }
    while (sign);
    return 0;
}