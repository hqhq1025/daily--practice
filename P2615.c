#include <stdio.h>


void rec(int square[40][40],int n);
int main(void) {
    int n;
    scanf("%d",&n);
    int square[40][40];
    square[0][2*n-1] = 1;
    rec(square,n,n);
    return 0;
}

void rec(int square[40][40],int n,int total)
{
    for(int i=0;i<total;i++)
    {
        if(n-1 == square[0][i] && )
    }
}