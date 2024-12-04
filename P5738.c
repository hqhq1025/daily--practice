#include <stdio.h>

double grade(int num[],int len);

int main(void) {
    int n,m;
    scanf("%d %d",&n,&m);
    int result[n];
    int mark[m];
    double max =0;
    double current;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&mark[j]);
        }
        current =grade(mark,m);
        if(max < current)
            max = current;
    }
    printf("%.2lf\n",max);
    return 0;
}

double grade(int num[],int len)
{
    int maxi=0;
    int mini=10;
    int sum = 0;
    for(int i=0;i<len;i++)
    {
        if(num[i] > maxi)
            maxi = num[i];
        if(num[i] < mini)
            mini = num[i];
        sum += num[i];
    }
    sum -= maxi + mini;
    return (double)sum/(len-2);
}