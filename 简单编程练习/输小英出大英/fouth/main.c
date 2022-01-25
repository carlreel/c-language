#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("请输入一个小写的英文字母\n");
    scanf("%c",&x);
    printf("小写英文字母%c",x);
    x=x-32;
    printf("对应的大写英文字母为%c\n",x);
    return 0;
}
