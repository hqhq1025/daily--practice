#include <stdio.h>

int main(void) {
    char num[100];
    int len = 0;
    char c;
    
    while (scanf("%c", &c) == 1 && c != '\n') {
        num[len++] = c;
    }
    num[len] = '\0';
    if(len == 1 && num[0]=='0')  printf("0");
    else
    {
        if (num[0] == '-') {
        printf("-");
        // 从末尾找到第一个非0数字
        int end = len - 1;
        while (end > 0 && num[end] == '0') {
            end--;
        }
        // 从这个位置逆序输出到第二个字符
        for (int i = end; i > 0; i--) {
            printf("%c", num[i]);
        }
    } else {
        // 从末尾找到第一个非0数字
        int end = len - 1;
        while (end >= 0 && num[end] == '0') {
            end--;
        }
        // 从这个位置逆序输出到第一个字符
        for (int i = end; i >= 0; i--) {
            printf("%c", num[i]);
        }
    }
    }
    printf("\n");
    return 0;
}