#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a=1.0,b,c;
    c=1.0;
    while (a<100)
    {
        b=b+1/a*c;
        a++;
        c=c*(-1);
        //printf("a=%f,b=%f,c=%f\n",a,b,c);
        printf("%f\n",b);
    }
    return 0;
}
