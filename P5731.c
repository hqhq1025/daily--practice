#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int num[10][10]={0};
    int total = n*n;
    int flag[4][2]= {{0,1},{1,0},{0,-1},{-1,0}};  //用来拐弯
    //int count = 0;
    int index_x=1,index_y=1;
    int flag_index=0;
    int temp_x,temp_y;
    for(int i = 1; i <= total; i++)
    {
        num[index_x][index_y] = i;
        temp_x = index_x+flag[flag_index][0];
        temp_y = index_y+flag[flag_index][1];
        if(temp_x<1||temp_x>n||temp_y<1||temp_y>n||num[temp_x][temp_y]!=0)
            flag_index = (flag_index+1)%4;
        index_x += flag[flag_index][0];
        index_y += flag[flag_index][1];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%3d",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}