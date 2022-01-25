#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,r;
    printf("请输入一个圆半径");
    scanf("%lf",&r);
    a=3.141592*r*r;
    b=2*3.141592*r;
    printf("半径r=%lf,周长=%lf,面积s=%lf\n",r,b,a);
    return 0;
}
