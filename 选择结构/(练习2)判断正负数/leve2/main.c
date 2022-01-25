#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("请输入整数");
    scanf("%d",&x);
    if (x>0)
    {
        y=1;
        printf("x为正数,y=%d\n",y);
    }
    else
    {
        if (x<0)
        {
            y=-1;
            printf("x为负数，y=%d",y);
        }
        else
        {
            y=0;
            printf("x为0,y=%d",y);
        }
    }
    return 0;
}
