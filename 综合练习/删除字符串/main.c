#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "c:\\submit.c"

#define  testPaperId   "2004007_210"
#define  topicId   "1"
#define  contentKeyword			"删除所输入的字符串中的所有#字符"
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
	char paperId[10] = {0};			//试卷编号
	char keyword[50] = {0};			//试题内容关键字
	char record[1024]={0};			//提交试卷的信息

//////////////////////////////   以上变量用于提交试卷   //////////////////////////////////////////

	char s[200],s_backup[200];

	printf("\n\t输入一个包含#号的字符串:\t");
	gets(s);
	strcpy(s_backup,s);

	fun(s);
	printf("\n\t经过 fun 函数处理后变为:\t%s\n\n\t",s);

//////////////////////////////   以下语句用于提交试卷  //////////////////////////////////////////

	sprintf(record, "\n\t输入包含#号的字符串是：%s\n\n\t经过 fun 函数处理变为：%s\n\n", s_backup,s);

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

