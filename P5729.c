#include <stdio.h>

int main(void) {
    int w,x,h;
    int count;
    int num[100][2][3];
    //int reduce[100];
    scanf("%d %d %d",&w,&x,&h);
    int total = 0;
    int marked[101][101][101];
    scanf("%d",&count);
    for(int i=0;i<count;i++)    //需要考虑重复切割的情况
    {
        scanf("%d %d %d %d %d %d",&num[i][0][0],&num[i][0][1],&num[i][0][2],&num[i][1][0],&num[i][1][1],&num[i][1][2]);
    }
    for (int i=1;i<=w;i++)
    {
        for(int j=1;j<=x;j++)
        {
            for(int k=1;k<=h;k++)
            {
                marked[i][j][k] = 0; //把标记数组初始化
            }
        }
    }
    for(int a=0;a<count;a++)
    {
        for (int i=num[a][0][0];i<=num[a][1][0];i++)
        {
            for(int j=num[a][0][1];j<=num[a][1][1];j++)
            {
                for(int k=num[a][0][2];k<=num[a][1][2];k++)
                {
                    marked[i][j][k] = 1; //对切割的方块进行标记
                }
            }
        }
    }
    for (int i=1;i<=w;i++)
    {
        for(int j=1;j<=x;j++)
        {
            for(int k=1;k<=h;k++)
            {
                if(marked[i][j][k] == 0) total+=1;
            }
        }
    }
    printf("%d\n",total);
    return 0;
}