#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("����һ����0��100֮�ڵ�����\n");
    scanf("%d",&a);
    b=a/10;
    switch(b)
    {
        case 10:printf("�ɼ��ȼ�ΪA");
        break;
        case 9:printf("�ɼ��ȼ�ΪA");
        break;
        case 8:printf("�ɼ��ȼ�ΪB");
        break;
        case 7:printf("�ɼ��ȼ�ΪC");
        break;
        case 6:printf("�ɼ��ȼ�ΪD");
        break;
        case 5:printf("�ɼ��ȼ�ΪE");
        break;
        case 4:printf("�ɼ��ȼ�ΪE");
        break;
        case 3:printf("�ɼ��ȼ�ΪE");
        break;
        case 2:printf("�ɼ��ȼ�ΪE");
        break;
        case 1:printf("�ɼ��ȼ�ΪE");
        break;
        case 0:printf("�ɼ��ȼ�ΪE");
        break;
        default:printf("������ֵ����0��100֮�ڵ�����");
    }
    return 0;
}
