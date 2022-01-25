#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "c:\\submit.c"

#define  testPaperId   "2004007_211"
#define  topicId   "3"
#define  contentKeyword			"删除字符串中所有的*号前后的非*号字符"
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
	char paperId[10] = {0};			//试卷编号
	char keyword[50] = {0};			//试题内容关键字
	char record[1024]={0};			//提交试卷的信息

//////////////////////////////   以上变量用于提交试卷   //////////////////////////////////////////

	char s[200],s_backup[200];

	printf("\n\t输入一个包含*号的字符串:\t");
	gets(s);
	strcpy(s_backup,s);

	fun(s);
	printf("\n\t经过 fun 函数处理后变为:\t%s\n\n\t",s);

//////////////////////////////   以下语句用于提交试卷  //////////////////////////////////////////

	sprintf(record, "\n\t输入包含*号的字符串是：%s\n\n\t经过 fun 函数处理变为：%s\n\n", s_backup,s);

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

