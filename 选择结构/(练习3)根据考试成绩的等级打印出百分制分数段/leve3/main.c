#include <stdio.h>
#include <stdlib.h>

int main()
{
    char p;
    printf("����ɼ��ȼ�A~E:");
    scanf("%c",&p);
    if (p=='A')
    {
        printf("��Ӧ�ķ�����Ϊ:90��100");
    }
    else
    {
        if (p=='B')
        {
            printf("��Ӧ�ķ�����Ϊ:80��89");
        }
        else
        {
            if (p=='C')
            {
                printf("��Ӧ�ķ�����Ϊ:70��79");
            }
            else
            {
                if (p=='D')
                {
                    printf("��Ӧ�ķ�����Ϊ:60��69");
                }
                else
                {
                    if (p=='E')
                    {
                        printf("��Ӧ�ķ�����Ϊ:0��59");
                    }
                    else
                    {
                        printf("�����ʽ�д�");
                    }
                }
            }
        }
    }
    return 0;
}
