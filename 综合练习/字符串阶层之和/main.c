#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "c:\\submit.c"

#define  testPaperId   "2004007_210"
#define  topicId   "4"
#define  contentKeyword			"���������ַ�תΪ���ֺ���׳�֮��"
#define  correctKeyword   "43"

///////////////////////////////////////////////////////////////////////////////////////////////

int jiechen(int x)
{
    int i,h=1;
    for (i=1;i<=x;i++)
    {
        h=h*i;
    }

    return h;


}
void fun(char *a, long int *s )
{
    int i=0,j,sum=0,k;
    while (*a!='\0')
    {
        k=jiechen(*a-'0');
        i++;
        a++;
        sum=sum+k;
        /*printf("%d\n",k);
        printf("jiec=%d\n",jiechen(*a-'0'));
        printf("sum=%d\n",sum);
        printf("----------------\n");*/
    }
    *s=sum;



}
void main()
{
	char paperId[10] = {0};			//Ĭ���Ծ���
	char keyword[50] = {0};			//�������ݹؼ���
	char record[1024]={0};			//�洢�ύ�Ծ����Ϣ

//////////////////////////////   ���ϱ��������ύ�Ծ�   //////////////////////////////////////////

	char s[1024];
	long sum;

	printf("\n\t����һ��ֻ���������ַ����ַ���:\t");
	gets(s);
	fun(s,&sum);
	printf("\n\t������ַ��������������ֵΪ:\t%d",sum);
	printf("\n\n\t");

//////////////////////////////   ������������ύ�Ծ�  //////////////////////////////////////////

	sprintf(record, "\n\t������������ַ����ַ����ǣ�%s\n\n\t�������������ֵ��%d\n\n", s,sum);

	#if defined testPaperId
		strcpy(paperId,testPaperId);
	#else
		strcpy(paperId,"====");
	#endif

	#if defined contentKeyword
		strcpy(keyword,contentKeyword);
	#else
		strcpy(keyword,"=====================");
	#endif
	submitFunction(paperId,topicId,keyword,record,correctKeyword);

	return;
}
