#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void turn_light(int *count_on, int lamp[], int i);

int main(void) {
    int n;
    scanf("%d", &n);

    double a[n];
    int t[n];
    int max = 0;

    // 读取输入并计算最大灯编号
    for (int i = 0; i < n; i++) {
        scanf("%lf %d", &a[i], &t[i]);
        int current_max = (int)floor(a[i] * t[i]);
        if (current_max > max) {
            max = current_max;
        }
    }

    // 动态分配灯状态数组
    int lamp[max + 1];
    for (int i = 0; i <= max; i++) {
        lamp[i] = 0; // 初始化所有灯为关闭状态
    }

    int count_on = 0; // 亮着的灯数量

    // 模拟操作，直接操作灯状态
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= t[i]; j++) {
            int lamp_index = (int)(a[i] * j) - 1; // 计算灯编号并调整为 0 索引
            turn_light(&count_on, lamp, lamp_index);
        }
    }

    // 找到唯一亮着的灯
    for (int i = 0; i <= max; i++) {
        if (lamp[i] == 1) {
            printf("%d\n", i + 1); // 恢复灯编号
            break;
        }
    }

    return 0;
}

void turn_light(int *count_on, int lamp[], int i) {
    if (lamp[i] == 0) {
        lamp[i] = 1;
        (*count_on)++;
    } else {
        lamp[i] = 0;
        (*count_on)--;
    }
}