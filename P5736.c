#include <stdio.h>

int is_prime(int x);

int main(void) {
    int n;
    scanf("%d",&n);
    int num[n];
    //int prime[n];
    //int index = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        if(is_prime(num[i]) == 1)
        {
            //prime[index] = num[i];
            //index++;
            printf("%d ",num[i]);
        }
    }
    return 0;
}

int is_prime(int x)
{
    if(x<=1)
        return 0;
    if(x == 2)
        return 1;
    for(int i = 2; i<=x/2;i++)
    {
        if(x % i == 0)
            return 0;
    }
    return 1;
}