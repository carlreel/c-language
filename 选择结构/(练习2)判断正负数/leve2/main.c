#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("����������");
    scanf("%d",&x);
    if (x>0)
    {
        y=1;
        printf("xΪ����,y=%d\n",y);
    }
    else
    {
        if (x<0)
        {
            y=-1;
            printf("xΪ������y=%d",y);
        }
        else
        {
            y=0;
            printf("xΪ0,y=%d",y);
        }
    }
    return 0;
}
