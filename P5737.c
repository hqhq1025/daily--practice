#include <stdio.h>

int is_run(int year);

int main(void) {
    int year[3000];
    int start,end;
    scanf("%d %d",&start,&end);
    int index = 0;
    for(int i=start;i<=end;i++)
    {
        if(is_run(i) == 1)
        {
            year[index] = i;
            index++;
        }
    }
    printf("%d\n",index);
    for(int i=0;i<index;i++)
    {
        printf("%d ",year[i]);
    }
    return 0;
}

int is_run(int year)
{
    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
            {
                return 1;
            }
            return 0;
        }
        return 1;
    }
    return 0;
}