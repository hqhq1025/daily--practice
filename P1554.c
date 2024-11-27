#include <stdio.h>

void count_digit(int number,int array[]);

int main(void) {
    int start,end;
    int digit[10] = {0};
    scanf("%d %d",&start,&end);
    for(int i = start; i <= end; i++)
    {
        count_digit(i,digit);
    }
    for(int i = 0; i <= 9; i++)
    {
        printf("%d ",digit[i]);
    }
    return 0;
}

void count_digit(int number,int array[])
{
    int last;
    while(number > 0)
    {
        last = number % 10;
        array[last] += 1;
        number /= 10;
    }
}