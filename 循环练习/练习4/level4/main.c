#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,n;
    scanf("%d",&n);
    a=1,b=1,c=1;
    while (c<n)
    {
        b=a+b;
        a=b-a;
        c++;
    }
    printf("该项为%d,第%d项\n",a,c);
    return 0;
}
