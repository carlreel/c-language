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
    printf("总数=%d\n",sum);
    avg=(float)sum/i;
    printf("平均值=%f\n",avg);
    for (i=0;i<10;i++)
    {
        if (a[i]%2==1)
        {
            he=a[i];
            j++;
            printf("%d为基数\n",he);
        }
    }printf("基数个数为%d\n",j);
    return 0;
}
