#include <stdio.h>
#include <stdlib.h>

int main()
{
    double s,r,h;
    printf("请输入一个圆柱体的半径和高");
    scanf("%lf,%lf",&r,&h);
    s=2*3.141592*r*h;
    printf("半径r=%lf,高=%lf的圆柱体,侧面积s=%lf。\n",r,h,s);
    return 0;
}
