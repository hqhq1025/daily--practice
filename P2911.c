#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b)) // 宏定义两个数的最大值
void std(int len, int array[]);
int remain(int num, int s);
int main(void) {
    int s1,s2,s3;
    int a1[100],a2[100],a3[100];
    scanf("%d %d %d",&s1,&s2,&s3);
    std(s1,a1);
    std(s2,a2);
    std(s3,a3);
    int repeat = s1*s2*s3;
    int sum[repeat + 1];
    int sum_max = s1+s2+s3;
    int count[100] = {0};
        for (int i = 1; i <= s1; i++) { // 第一个骰子
        for (int j = 1; j <= s2; j++) { // 第二个骰子
            for (int k = 1; k <= s3; k++) { // 第三个骰子
                int sum = i + j + k; // 计算点数和
                count[sum]++; // 对应点数和出现次数加 1
            }
        }
    }
    int current_max = count[0];
    int max_index = 0;
    for (int i = 0; i <= sum_max; i++)
    {
        if(current_max < count[i])
        {
            current_max = count[i];
            max_index = i;            
        }
    }
    printf("%d\n",max_index);
    return 0;
}


void std(int len, int array[])
{
    for (int i = 1; i<=len;i++)
        array[i] = i;
}

