#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    int num[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    // 初始化第一个窗口的和
    int current_sum = 0;
    for (int i = 0; i < m; i++) {
        current_sum += num[i];
    }

    int current_min = current_sum; // 初始化最小值为第一个窗口的和

    for (int i = m; i < n; i++) {
        current_sum = current_sum + num[i] - num[i - m]; 
        if (current_sum < current_min) {
            current_min = current_sum; 
        }
    }

    printf("%d\n", current_min);
    return 0;
}