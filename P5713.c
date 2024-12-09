#include <stdio.h>

int back(int num);

int main(void) {
    int n;
    int sum = 1;
    scanf("%d",&n);
    while(n>1)
    {
        sum=back(sum);
        n--;
    }
    printf("%d\n",sum);
    return 0;
}

int back(int num)
{
    return 2*(num+1);
}