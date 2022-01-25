#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "c:\\submit.c"

#define  testPaperId   "2004007_211"
#define  topicId   "5"
#define  contentKeyword			"偶数位置的数字字符转为数字后其阶乘之和"
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
