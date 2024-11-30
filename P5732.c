#include <stdio.h>


void write(int i,int j,int (*matrix)[20]);

int main(void) {
    int n;
    scanf("%d",&n);
    int num[20][20] = {0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            write(i,j,num);
        }
        printf("\n");
    }
    return 0;
}

void write(int i,int j,int (*matrix)[20])
{
    if (i == 0 || i == 1 || j == 0 || i ==j ) matrix[i][j] = 1;
    else
    {
        if (i % 2 == 0 && 2*(j+1) - 1 == i+1)
            matrix[i][j] = matrix[i-1][j-1] + matrix[i-1][j];
        
        else
        {
            //if(j+1 <= (i+1)/2)
            //    matrix[i][j] = matrix[i-1][j-1] + matrix[i-1][j];
            //else
            //我傻逼了 不需要分类讨论
            
            matrix[i][j] = matrix[i-1][j-1] + matrix[i-1][j];
        }
    }
    printf("%d ",matrix[i][j]);
}