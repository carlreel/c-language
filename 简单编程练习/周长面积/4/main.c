#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,r;
    printf("������һ��Բ�뾶");
    scanf("%lf",&r);
    a=3.141592*r*r;
    b=2*3.141592*r;
    printf("�뾶r=%lf,�ܳ�=%lf,���s=%lf\n",r,b,a);
    return 0;
}
