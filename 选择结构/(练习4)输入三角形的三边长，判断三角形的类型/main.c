#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("���������������ÿո����\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a+b>c&&b+c>a&&a+c>b)
    {
        if (a==b||b==c||a==c)
        {
            if (a==b&&b==c)
            {
                printf("�ȱ�������");
            }
            else
            {
                printf("����������");
            }
        }
        else
        {
            printf("һ��������");
        }
    }
    else
    {
        printf("����������");
    }
    return 0;
}
