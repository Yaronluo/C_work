#include <stdio.h>

void change(int* pa,int* pb)
{
     int c = 0;
     c = *pa;
     *pa = *pb;
     *pb = c;
}

int main()
{
    int a,b;
    a = 0,b = 0;
    scanf("%d%d",&a,&b);
    printf("交换前%d %d\n",a,b);
    change(&a,&b);
    printf("交换后%d %d",a,b);
}