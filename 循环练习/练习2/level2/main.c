#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    a=1,b=3;
    while (b<10)
    {
        a=a*b;
        b+=2;
        printf("%d,%d\n",a,b);
    }
    return 0;
}
