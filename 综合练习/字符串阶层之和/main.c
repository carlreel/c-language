#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "c:\\submit.c"

#define  testPaperId   "2004007_210"
#define  topicId   "4"
#define  contentKeyword			"计算数字字符转为数字后其阶乘之和"
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
	char paperId[10] = {0};			//默认试卷编号
	char keyword[50] = {0};			//试题内容关键字
	char record[1024]={0};			//存储提交试卷的信息

//////////////////////////////   以上变量用于提交试卷   //////////////////////////////////////////

	char s[1024];
	long sum;

	printf("\n\t输入一个只包含数字字符的字符串:\t");
	gets(s);
	fun(s,&sum);
	printf("\n\t输入的字符串，处理计算后的值为:\t%d",sum);
	printf("\n\n\t");

//////////////////////////////   以下语句用于提交试卷  //////////////////////////////////////////

	sprintf(record, "\n\t输入包含数字字符的字符串是：%s\n\n\t函数处理计算后的值：%d\n\n", s,sum);

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
