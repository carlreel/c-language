#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,r;
    b=3,r=1;
    do
    {
        a=b*r*r;
        r++;
        printf("���=%d,�뾶=%d\n",a,r);
    }while(a<=150);
    r=r-2;
    a=b*r*r;
    printf("���Ϊ%d\n",a);
    return 0;
}
