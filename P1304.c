#include <stdio.h>
#include<math.h>

int is_prime(int num);
void gede(int num);

int main(void) {
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i+=2)
    {
        gede(i);
    }
    return 0;
}

int is_prime(int num)
{
    if(num <=1) return 0;
    if(num == 2) return 1;
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i ==0)   return 0;
    }
    return 1;
}

void gede(int num)
{
    //int first,last;
    for(int i=2;i<=num/2;i++)
    {
        if(is_prime(i) && is_prime(num-i))
        {
            printf("%d=%d+%d\n",num,i,num-i);
            return;
        }
    }
}