#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char name[100];
    int chinese;
    int math;
    int english;
    int sum;
} Student;

int compare(Student a, Student b);

int main(void) {
    int num;
    scanf("%d",&num);
    Student stu[1000];
    for(int i=0;i<num;i++)
    {
        scanf("%s %d %d %d",stu[i].name,&stu[i].chinese,&stu[i].math,&stu[i].english);
        stu[i].sum = 0;
        stu[i].sum += stu[i].chinese+stu[i].math+stu[i].english;
    }
    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            if(compare(stu[i],stu[j]) == 1 && (j != i))
            {
                printf("%s %s\n",stu[i].name,stu[j].name);
            }
        }
    }
    return 0;
}

int compare(Student a, Student b)
{
    if(abs(a.chinese-b.chinese) > 5)
        return 0;
    else if(abs(a.english-b.english) > 5)
        return 0;
    else if(abs(a.math-b.math) > 5)
        return 0;
    else if(abs(a.sum-b.sum) > 10)
        return 0;
    else return 1;
}