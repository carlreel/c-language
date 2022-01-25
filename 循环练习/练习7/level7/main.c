#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    a=100;
    while (a<200)
    {
        b=a%3;
        //printf("a=%d,b=%d,c=%d\n",a,b,c);
        if (b==0)
        {
            //printf("%d\n",a);
        }
        else
        {
            printf("%d\n",a);
        }
        a++;
    }
    return 0;
}
