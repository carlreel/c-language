#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("输入三个整数，用空格隔开\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a+b>c&&b+c>a&&a+c>b)
    {
        if (a==b||b==c||a==c)
        {
            if (a==b&&b==c)
            {
                printf("等边三角形");
            }
            else
            {
                printf("等腰三角形");
            }
        }
        else
        {
            printf("一般三角形");
        }
    }
    else
    {
        printf("不是三角形");
    }
    return 0;
}
