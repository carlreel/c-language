#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    a=1,b=2;
    while (b<=100)
    {
        a=a+b;
        b++;
        printf("%d,%d\n",a,b);
    }
    return 0;
}
