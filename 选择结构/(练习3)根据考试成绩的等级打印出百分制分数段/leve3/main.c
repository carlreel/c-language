#include <stdio.h>
#include <stdlib.h>

int main()
{
    char p;
    printf("输入成绩等级A~E:");
    scanf("%c",&p);
    if (p=='A')
    {
        printf("对应的分数段为:90～100");
    }
    else
    {
        if (p=='B')
        {
            printf("对应的分数段为:80～89");
        }
        else
        {
            if (p=='C')
            {
                printf("对应的分数段为:70～79");
            }
            else
            {
                if (p=='D')
                {
                    printf("对应的分数段为:60～69");
                }
                else
                {
                    if (p=='E')
                    {
                        printf("对应的分数段为:0～59");
                    }
                    else
                    {
                        printf("输入格式有错");
                    }
                }
            }
        }
    }
    return 0;
}
