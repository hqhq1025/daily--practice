#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int num[n][3];
    int count = 0;
    int sum[n];
    int flag;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&num[i][0],&num[i][1],&num[i][2]);
        sum[i] =num[i][0]+num[i][1]+num[i][2];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            flag = 1;
            if(abs(sum[i]-sum[j])<=10)
            {
                for(int a =0;a<3;a++)
                {
                    if(abs(num[i][a]-num[j][a])>5)
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            else 
            {
                flag = 0;
            }
            if(flag == 1) count += 1;
        }
    }
    printf("%d\n",count);
    return 0;
}