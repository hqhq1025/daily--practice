#include <stdio.h>

int main(void) {
    int max;
    int sum = 0;
    int rep;
    int is_one = 0;
    int count = 0;
    scanf("%d",&max);
    while( sum < max*max)
    {
        scanf("%d",&rep);
        sum += rep;
        for(int i=0;i<rep;i++)
        {
            printf("%d",is_one);
            count++; //记录每一行的输入数量 用于控制换行
            if(count == max)
            {
                printf("\n");
                count = 0;
            }
        }
        is_one = 1 - is_one;
    }
    return 0;
}