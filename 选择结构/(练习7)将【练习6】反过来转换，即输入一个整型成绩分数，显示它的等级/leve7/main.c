#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("输入一个在0到100之内的整数\n");
    scanf("%d",&a);
    b=a/10;
    switch(b)
    {
        case 10:printf("成绩等级为A");
        break;
        case 9:printf("成绩等级为A");
        break;
        case 8:printf("成绩等级为B");
        break;
        case 7:printf("成绩等级为C");
        break;
        case 6:printf("成绩等级为D");
        break;
        case 5:printf("成绩等级为E");
        break;
        case 4:printf("成绩等级为E");
        break;
        case 3:printf("成绩等级为E");
        break;
        case 2:printf("成绩等级为E");
        break;
        case 1:printf("成绩等级为E");
        break;
        case 0:printf("成绩等级为E");
        break;
        default:printf("输入数值不是0到100之内的整数");
    }
    return 0;
}
