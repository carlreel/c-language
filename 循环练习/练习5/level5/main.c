#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f;
    c=1,d=0;
    while (c<=6)
    {
        a=1,b=1;
        while (b<=c)
        {
            a=a*b;
            b++;
            //printf("ѭ��a=%d,b=%d,c=%d\n",a,b,c);
        }
        printf("%d�׳�Ϊ=%d\n",c,a);
        c++;
        d=d+a;
    }
    printf("1��6�Ľ׳����Ϊ%d\n",d);
    return 0;
}
