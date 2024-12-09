#include <stdio.h>

typedef struct 
{
    char name[1000];
    int year;
    int grade;
} Student;


int main(void) {
    int n;
    scanf("%d",&n);
    Student stu[10];
    for(int i=0;i<n;i++)
    {
        scanf("%s %d %d",stu[i].name,&stu[i].year,&stu[i].grade);
        stu[i].year +=1;
        stu[i].grade *= 1.2;
        if(stu[i].grade > 600)
            stu[i].grade = 600;  //设置上限
    }
    for(int i=0;i<n;i++)
    {
        printf("%s %d %d\n",stu[i].name,stu[i].year,stu[i].grade);
    }
    return 0;
}