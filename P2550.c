#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int correct[10];
    int lottery[n][10];
    int count[1000] = {0}; //创建统计数组
    int output[1000] = {0}; //再统计一遍，用于直接输出
    for(int i=0;i<7;i++)
    {
        scanf("%d",&correct[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<7;j++)
        {
            scanf("%d",&lottery[i][j]);
            if(lottery[i][j] == correct[0]||lottery[i][j] ==correct[1]||lottery[i][j] ==correct[2]||lottery[i][j] ==correct[3]||lottery[i][j] ==correct[4]||lottery[i][j] ==correct[5]||lottery[i][j] ==correct[6])
            {
                count[i]+=1;
            }
        }
        output[count[i]] += 1;
    }
    for (int i = 7; i >= 1; i--)
    {
        printf("%d ",output[i]);
    }
    
    return 0;
}