#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g,h,x,j,k,l,i;
    printf("输入10个大于零的整数,用空格隔开");
    scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l);
    i=1;
    while (a>i||b>i||c>i||d>i||e>i||f>i||g>i||h>i||x>i||j>i||k>i||l>i)
    {
        i++;
        //printf("%d\n",i);
    }
    printf("最大值为%d\n",i);
    return 0;
}
