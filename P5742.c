#include <stdio.h>

typedef struct 
{
    int number;
    int xueye;
    int suzhi;
    int sum;
    int weight_sum;
} Student;

int main(void) {
    int num;
    scanf("%d",&num);
    Student stu[1000];
    for(int i=0;i<num;i++)
    {
        scanf("%d %d %d",&stu[i].number,&stu[i].xueye,&stu[i].suzhi);
        stu[i].sum = 0,stu[i].weight_sum = 0;
        stu[i].sum += stu[i].xueye + stu[i].suzhi;
        stu[i].weight_sum += 7*stu[i].xueye + 3*stu[i].suzhi;
    }
    for(int i=0;i<num;i++)
    {
        if(stu[i].sum > 140 && stu[i].weight_sum >=800)
            printf("Excellent\n");
        else
            printf("Not excellent\n");
    }
    return 0;
}