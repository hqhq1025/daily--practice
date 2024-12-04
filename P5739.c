#include <stdio.h>

int fac(int n);

int main(void) {
    int n;
    scanf("%d",&n);
    printf("%d\n",fac(n));
    return 0;
}

int fac(int n)
{
    if(n==1)
        return 1;
    return n*(fac(n-1));
}