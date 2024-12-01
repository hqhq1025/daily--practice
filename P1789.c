#include <stdio.h>

void torch(int n, int x, int y, int (*square)[100]);
void glow_stone(int n, int x, int y, int (*square)[100]);

int main(void) {
    int n;
    scanf("%d",&n);
    int square[100][100] = {0};
    int m,k;
    int x,y;
    scanf("%d %d",&m,&k);
    for(int i = 0; i<m;i++)
    {
        scanf("%d %d",&x,&y);
        torch(n,x,y,square);
    }
    for(int i = 0; i<k;i++)
    {
        scanf("%d %d",&x,&y);
        glow_stone(n,x,y,square);
    }
    int dark_count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (square[i][j] == 0) {
                dark_count++;
            }
        }
    }
    printf("%d\n",dark_count);
    return 0;
}

void torch(int n, int x, int y, int (*square)[100])
{
    int count = 0;
    int tep_x,tep_y;
    while(count < 9)
    {
        for(int i=-1;i<=1;i++)
        {
            for(int j=-1;j<=1;j++)
            {
                tep_x = (x-1)+i;  //x,y -1是因为坐标数组由0开始
                tep_y = (y-1)+j;
                if(tep_x >= 0 && tep_x < n && tep_y>=0&&tep_y <n)
        {
            square[tep_x][tep_y] = 1;
        }
        count++;// 统计是否对方形区域完成照亮
            }
        }
        
    }
    int torch[2][4]= {{0,2,0,-2},{2,0,-2,0}};  // 火把照亮的四个特殊点 手动标记
    for(int i=0; i<4;i++)
    {
        tep_x = x-1 + torch[0][i];
        tep_y = y-1 + torch[1][i];
        if(tep_x >= 0 && tep_x < n && tep_y>=0&&tep_y <n)
        {
            square[tep_x][tep_y] = 1;
        }
    }
    
}

void glow_stone(int n, int x, int y, int (*square)[100])
{
    int tep_x,tep_y;
    for(int i=-2;i<=2;i++)
    {
        for(int j=-2;j<=2;j++)
        {
            tep_x = x-1 + i;
            tep_y = y-1 + j;
            if(tep_x >= 0 && tep_x < n && tep_y>=0&&tep_y <n)
            {
                square[tep_x][tep_y] = 1;
            }
        }
    }
    
}