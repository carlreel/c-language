#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "c:\\submit.c"

#define  testPaperId   "2004007_210"
#define  topicId   "1"
#define  contentKeyword			"ɾ����������ַ����е�����#�ַ�"
#define  correctKeyword   "41"

///////////////////////////////////////////////////////////////////////////////////////////////
void fun ( char *a)
{
    char x[200],*p;
    int i,j,t=0;
    p=x;
    for (i=0;i<200;i++)
    {
        if (*(a+i)=='\0')
            break;
    }
    //printf("i=%d\n",i);
    for (j=0;j<i;j++)
    {
        if (*(a+j)!='#')
        {
            x[t]=*(a+j);
            t++;
        }
    }
    /*printf("t=%d\n",t);
    for (i=0;i<t;i++)
    {
        printf("x[%d]=%c\n",i,x[i]);
    }*/
    for (i=0;i<t;i++)
    {
        *(a+i)=*(p+i);
    }
    *(a+t)='\0';





}

void main()
{
	char paperId[10] = {0};			//�Ծ���
	char keyword[50] = {0};			//�������ݹؼ���
	char record[1024]={0};			//�ύ�Ծ����Ϣ

//////////////////////////////   ���ϱ��������ύ�Ծ�   //////////////////////////////////////////

	char s[200],s_backup[200];

	printf("\n\t����һ������#�ŵ��ַ���:\t");
	gets(s);
	strcpy(s_backup,s);

	fun(s);
	printf("\n\t���� fun ����������Ϊ:\t%s\n\n\t",s);

//////////////////////////////   ������������ύ�Ծ�  //////////////////////////////////////////

	sprintf(record, "\n\t�������#�ŵ��ַ����ǣ�%s\n\n\t���� fun ���������Ϊ��%s\n\n", s_backup,s);

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

