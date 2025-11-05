#include <stdio.h>

struct Student//定义结构体类型Student
{
    char name[20];
    int age;
    char gender[10];
    char id[20];//学号
};

int main()
{
    printf("请输入学生的信息(姓名 年龄 性别 学号):\n");
    struct Student student1;//定义结构体变量，相当于int students；
    //使用方式：结构体变量.成员名
    scanf("%s%d%s%s",student1.name,&student1.age,student1.gender,student1.id);//顺序要与定义结构体时一致
    printf("学生信息如下:\n");
    printf("姓名:%s\n",student1.name);
    printf("年龄:%d\n",student1.age);
    printf("性别:%s\n",student1.gender);
    printf("学号:%s\n",student1.id);
    return 0;
}