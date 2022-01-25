#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "c:\\submit.c"

#define  testPaperId   "2004007_210"
#define  topicId   "2"
#define  contentKeyword			"将字符串中的大写字母改为小写字母"
#define  correctKeyword   "68"


///////////////////////////////////////////////////////////////////////////////////////////////

void fun ( char *a)
{
    int i,j;
    /*for (i=0;i<1024;i++)
    {
        if (*(a+i)=='\0')
            break;
    }
    //printf("i=%d\n",i);
    for (j=0;j<i;j++)
    {
        if ((*(a+j)>='A')&&(*(a+j)<='Z'))
        {
            printf("*(a+j)=%c\n",*(a+j));
            *(a+j)=(*(a+j)+32);
        }
    }*/
    while (*a!='\0')
    {
        if ((*a>='A')&&(*a<='Z'))
        {
            *a=*a+32;
            a++;
        }
        else
        {
            a++;
        }
    }



}

void main()
{
	char paperId[10] = {0};			//试卷编号
	char keyword[50] = {0};			//试题内容关键字
	char record[1024]={0};			//提交试卷的信息

//////////////////////////////   以上变量用于提交试卷   ///////////////////////////////////////
	char s[1024],s_backup[1024];

	printf("\n\t输入一个包含大写字母的字符串: \t");
	gets(s);
	strcpy(s_backup,s);
	fun(s);
	printf("\n\t你所输入的字符串：%s\n\n\t经 fun函数处理后：%s\n",s_backup,s);
	printf("\n\t");


//////////////////////////////   以下语句用于提交试卷  //////////////////////////////////////////
	sprintf(record, "\t你所输入的字符串：%s\n\t经 fun函数处理后：%s\n",s_backup,s);

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
