#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "c:\\submit.c"

#define  testPaperId   "2004007_211"
#define  topicId   "3"
#define  contentKeyword			"ɾ���ַ��������е�*��ǰ��ķ�*���ַ�"
#define  correctKeyword   "70"

///////////////////////////////////////////////////////////////////////////////////////////////
void fun ( char *a)
{
   char *p;
    p=a;
    int i=0;
    while (*p!='*')
    {
        p++;
    }
    while (*p!='\0')
    {
        a[i]=*p;
        p++;
        i++;
    }
    p=a+i;
    while (*p!='*')
    {
        p--;
    }
    *(p+1)='\0';



}

void main()
{
	char paperId[10] = {0};			//�Ծ���
	char keyword[50] = {0};			//�������ݹؼ���
	char record[1024]={0};			//�ύ�Ծ����Ϣ

//////////////////////////////   ���ϱ��������ύ�Ծ�   //////////////////////////////////////////

	char s[200],s_backup[200];

	printf("\n\t����һ������*�ŵ��ַ���:\t");
	gets(s);
	strcpy(s_backup,s);

	fun(s);
	printf("\n\t���� fun ����������Ϊ:\t%s\n\n\t",s);

//////////////////////////////   ������������ύ�Ծ�  //////////////////////////////////////////

	sprintf(record, "\n\t�������*�ŵ��ַ����ǣ�%s\n\n\t���� fun ���������Ϊ��%s\n\n", s_backup,s);

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

