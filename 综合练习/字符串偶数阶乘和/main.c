#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "c:\\submit.c"

#define  testPaperId   "2004007_211"
#define  topicId   "5"
#define  contentKeyword			"ż��λ�õ������ַ�תΪ���ֺ���׳�֮��"
#define  correctKeyword   "73"

///////////////////////////////////////////////////////////////////////////////////////////////

int jiechen(int x)
{
    int s=1,i;
    if (x<2)
        return 0;
    for (i=2;i<=x;i++)
    {
        s=s*i;
    }
    return s;






}
void fun(char *a, long int *s )
{
    char *p;
    int i,sum=0,k;
    p=a;
    while (*p!='\0')
    {
        /*printf("*p=%c\n",*p);
        printf("jiec=%d\n",jiechen(*p-'0'));*/
        k=*p-'0';
        //printf("sum=%d\n",sum);*/
        if (k%2==0)
        {
            //printf("k=%d\n",k);
            sum=sum+jiechen(k);
             /*printf("sum=%d\n",sum);
             printf("jiec=%d\n",jiechen(k));*/
            p++;
        }
        p++;
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
