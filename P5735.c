#include <stdio.h>
#include <math.h>

double distance(double x1,double y1,double x2,double y2);

int main(void) {
    double sum = 0;
    double point[2][3];
    for(int i=0;i<3;i++)
    {
        scanf("%lf %lf",&point[0][i],&point[1][i]);
    }
    sum += distance(point[0][0],point[1][0],point[0][1],point[1][1]) + distance(point[0][2],point[1][2],point[0][1],point[1][1]) + distance(point[0][0],point[1][0],point[0][2],point[1][2]);
    printf("%.2lf\n",sum);
    return 0;
}

double distance(double x1,double y1,double x2,double y2)
{
    double dis = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return dis;
}