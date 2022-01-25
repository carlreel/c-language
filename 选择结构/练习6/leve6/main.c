#include <stdio.h>
#include <stdlib.h>

int main()
{
    char r;
    printf("输入成绩等级%c\n",r );
    scanf("%c",&r);
    printf("分数段为：" );
    switch (r)
    {
        case 'A':printf("90～100");
        break;
        case 'B':printf("80～89");
        break;
        case 'C':printf("70～79");
        break;
        case 'D':printf("60～69");
        break;
        case 'E':printf("0～59");
        break;
        default:printf("输入成绩等级有错！\n");
        break;
    }

    return 0;
}
