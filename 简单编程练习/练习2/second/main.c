#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,r;
    printf("输入一个大于零的数");
    scanf("%f",&r);
    a=3.14*r*r;
    b=2*3.14*r;
    printf("圆的面积为%f,圆的周长为%f\n",a,b);
    return 0;
}
