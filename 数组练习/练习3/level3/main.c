#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,sum,he,j;
    float avg;
    sum=0,j=0;
    for (i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=a[i]+sum;
    }
    printf("����=%d\n",sum);
    avg=(float)sum/i;
    printf("ƽ��ֵ=%f\n",avg);
    for (i=0;i<10;i++)
    {
        if (a[i]%2==1)
        {
            he=a[i];
            j++;
            printf("%dΪ����\n",he);
        }
    }printf("��������Ϊ%d\n",j);
    return 0;
}
