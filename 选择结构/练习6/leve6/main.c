#include <stdio.h>
#include <stdlib.h>

int main()
{
    char r;
    printf("����ɼ��ȼ�%c\n",r );
    scanf("%c",&r);
    printf("������Ϊ��" );
    switch (r)
    {
        case 'A':printf("90��100");
        break;
        case 'B':printf("80��89");
        break;
        case 'C':printf("70��79");
        break;
        case 'D':printf("60��69");
        break;
        case 'E':printf("0��59");
        break;
        default:printf("����ɼ��ȼ��д�\n");
        break;
    }

    return 0;
}
