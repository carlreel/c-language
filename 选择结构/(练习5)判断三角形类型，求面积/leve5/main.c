#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    double a,b,c,s,area;
    printf("��������С��,�ÿո����");
    scanf("%lf%lf%lf",&a,&b,&c);
    if (a+b>c&&b+c>a&&a+c>b)
    {
        s=(a+b+c)/2.0;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("���Ϊ%lf\n",area);
    }
    else
    {
        printf("���ݴ���\n");
    }
    return 0;
}
