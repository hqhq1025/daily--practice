#include <stdio.h>

typedef struct 
{
    char name[100];
    int chinese;
    int math;
    int english;
    int sum;
} Student;


int main(void) {
    int n;
    scanf("%d",&n);
    Student stu[n];
    int max = 0;
    int max_index = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%s %d %d %d",stu[i].name,&stu[i].chinese,&stu[i].math,&stu[i].english);
        stu[i].sum =stu[i].chinese + stu[i].english + stu[i].math;
        if(max < stu[i].sum)
        {
            max = stu[i].sum;
            max_index = i;
        }
    }
    printf("%s %d %d %d\n",stu[max_index].name,stu[max_index].chinese,stu[max_index].math,stu[max_index].english);
    return 0;
}