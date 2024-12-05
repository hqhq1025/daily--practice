#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    scanf("%d",&n);
    for(int i = 2; i <sqrt(n);i++)
    {
        if(n % i == 0)
        {
            printf("%d\n",n/i);
            break;
        }
    }
    return 0;
}