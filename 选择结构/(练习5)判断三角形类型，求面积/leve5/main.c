#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    double a,b,c,s,area;
    printf("输入三个小数,用空格隔开");
    scanf("%lf%lf%lf",&a,&b,&c);
    if (a+b>c&&b+c>a&&a+c>b)
    {
        s=(a+b+c)/2.0;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("面积为%lf\n",area);
    }
    else
    {
        printf("数据错误\n");
    }
    return 0;
}
