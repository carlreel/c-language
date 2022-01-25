#include <stdio.h>//求输入的数字的位数，并将位置互换
#include <stdlib.h>

int main()
{
    int a,w,q,b,s,g,f;//w=万位，q=千位,b=百位,s=十位,g=个位
    printf("输入0~99999的整数");
    scanf("%d",&a);
    if (a/10000>0)
    {
        w=a/10000;
        q=(a%10000)/1000;
        b=(a%1000)/100;
        s=(a%100)/10;
        g=a%10;
        f=g*10000+s*1000+b*100+q*10+w;
        printf("%-3d %-3d %-3d %-3d %d\n",w,q,b,s,g);
        printf("%d",f);
    }
    else if (a/1000>0)
    {
        q=(a%10000)/1000;
        b=(a%1000)/100;
        s=(a%100)/10;
        g=a%10;
        f=g*1000+s*100+b*10+q;
       printf("%-3d %-3d %-3d %-3d\n",q,b,s,g);
        printf("%d",f);
    }
    else if (a/100>0)
    {
        b=(a%1000)/100;
        s=(a%100)/10;
        g=a%10;
        f=g*100+s*10+b;
        printf("%-3d %-3d %-3d\n",b,s,g);
        printf("%d",f);
    }
    else if (a/10>0)
    {
        s=(a%100)/10;
        g=a%10;
        f=g*10+s;
        printf("%-3d %-3d\n",s,g);
        printf("%d",f);
    }
    else if (a>0)
    {
        g=a%10;
        f=g;
        printf("%-3d\n",g);
        printf("%d",f);
    }
    else
    {
        printf("输入格式错误\n");
    }
    return 0;
}
