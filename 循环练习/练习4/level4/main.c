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
    printf("����Ϊ%d,��%d��\n",a,c);
    return 0;
}
