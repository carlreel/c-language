#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]={12,23,34,45,56,67,78,89,90,1},t,i,max;
    max=a[0];
    for (i=0;i<10;i++)
    {
        //printf("ѭ��a[i]=%d\n",a[i]);
        t=a[i];
        if (max<a[i])
        {
            max=a[i];
        }
        t=max;
        //printf("ѭ��a[i]=%d\n",a[i]);
        //printf("t=%d\n",t);
        //printf("max=%d\n",max);
    }
    printf("���ֵΪ%d\n",t);
    return 0;
}
