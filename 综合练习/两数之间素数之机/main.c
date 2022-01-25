#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "c:\\submit.c"

#define  testPaperId   "2004007_211"
#define  topicId   "1"
#define  contentKeyword			"计算20以内的两整数之间素数之积"
#define  correctKeyword   "67"

///////////////////////////////////////////////////////////////////////////////////////////////

int  sushu(int num)
{
    int i;
    if (num<2)
        return -1;
    for (i=2;i<num;i++)
    {
        if (num%i==0)
            return -1;
    }
    return num;





}
int   fun(int num1, int num2)
{
    int t,i,s=1;
    if (num2<num1)
    {
        t=num1;
        num1=num2;
        num2=t;
    }
    for (i=num1;i<num2;i++)
    {
        //printf("sushu(%d)=%d\n",i,sushu(i));
        if (sushu(i)!=-1)
        {
            s=s*i;
        }
    }
    return s;


}


void main()
{
	char paperId[10] = {0};			//试卷编号
	char keyword[50] = {0};			//试题内容关键字
	char record[1024]={0};			//提交试卷的信息

//////////////////////////////   以上变量用于提交试卷   ///////////////////////////////////////
	int n1,n2;
	long s;

	printf("\n\t请先输入两个不相等，不大于20的正整数:\t");
	scanf("%d%d",&n1,&n2);
	if(n1==n2 || n1>20 || n2>20)
	{
		printf("你的输入有误，不符合题目要求，重新运行!\n");
			return;
	}
	s=fun(n1,n2);

	printf("\n\t你输入的正整数是：%d 和 %d 。\n",n1,n2);
	printf("\n\t它们之间的素数之积为（包括这两个数）：%d 。\n\n",s);
	printf("\t");

//////////////////////////////   以下语句用于提交试卷  //////////////////////////////////////////

	sprintf(record, "\n\t输入的正整数是：%d 和 %d \n\n\t它们之间的素数之积为（包括这两个数）：%d\n\n", n1,n2,s);

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
