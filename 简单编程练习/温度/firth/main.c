#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,c;
    printf("请输入华氏温度\t");
    scanf("%f",&x);
    c=5*((x-32)/9);
    printf("华氏温度%f，转化为摄氏温度是%.2f\n",x,c);
    return 0;
}
