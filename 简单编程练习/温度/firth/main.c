#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,c;
    printf("�����뻪���¶�\t");
    scanf("%f",&x);
    c=5*((x-32)/9);
    printf("�����¶�%f��ת��Ϊ�����¶���%.2f\n",x,c);
    return 0;
}
