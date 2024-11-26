#include <stdio.h>

int main(void) {
    int n;
    int num[1000];
    scanf("%d",&n);
    int count = 1;
    num[0] = n;
    while(n != 1)
    {
        if(n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = 3*n + 1;
        }
        num[count] = n;
        count += 1;
    }
    for(int i = count - 1; i >= 0; i--)
    {
        printf("%d ",num[i]);
    }
    return 0;
}