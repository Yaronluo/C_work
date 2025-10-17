#include <stdio.h>
#include <stdlib.h>//rand函数和srand函数头文件
#include <time.h>//time函数的头文件

void game ()//game函数引用
{
     printf("注意你只有十次机会哦!!!\n");
     int number = rand() % 100 + 1;//产生随机数，不能放在while循环内，否则会不断随机
     for (int times = 1; times <= 10; times++)
     {
         printf("---第%d次---\n",times);
         int input = 0;
         printf("请输入一个数字(1~100)\n");
         scanf("%d",&input);
         if (input > 100 || input <= 0)
         {
             printf("请输入正确的数字\n");
             continue;
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
         if (times == 10 && number != input)//次数用尽显示的画面
         {
             printf(" 《===次数已用尽===》\n");
             printf("《===正确答案是%d===》\n",number);
             printf(" 《===再玩一次吧===》\n\n");
         }
     }
}
int main()
{
    srand((unsigned int)time(NULL));//使种子随机不至于导致每次生成的随机数相同，不需要放在循环中，不然会一直改变种子，没必要！而且会有小bug
    int sign = 0;
    printf("欢迎游玩猜数字游戏\n");
    do
    {
      printf("------------------------\n");
      printf("------开始游戏请输入1------\n");
      printf("------退出游戏请输入0------\n");
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
          default:
          printf("请输入正确的数字!!!");
          break;
      }
    }
    while (sign);
    return 0;
}