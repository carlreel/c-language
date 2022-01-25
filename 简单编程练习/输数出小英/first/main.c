#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("请输入0~25之间的整数:");
    scanf("%d",&x);
    char ch='a'+x;
    printf("%c\n",ch);
    return 0;
}
