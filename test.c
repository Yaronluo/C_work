#include <stdio.h>

#define ROW 10  // 初始定义

void print_row() {
    printf("初始 ROW: %d\n", ROW); // 输出 10
}

// 取消并重新定义
#undef ROW
#define ROW 20

void print_new_row() {
    printf("修改后 ROW: %d\n", ROW); // 输出 20
}

int main() {
    print_row();
    print_new_row();
    return 0;
}
