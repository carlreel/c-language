#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "c:\\submit.c"

#define  testPaperId   "2004007_211"
#define  topicId   "1"
#define  contentKeyword			"����20���ڵ�������֮������֮��"
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
	char paperId[10] = {0};			//�Ծ���
	char keyword[50] = {0};			//�������ݹؼ���
	char record[1024]={0};			//�ύ�Ծ����Ϣ

//////////////////////////////   ���ϱ��������ύ�Ծ�   ///////////////////////////////////////
	int n1,n2;
	long s;

	printf("\n\t����������������ȣ�������20��������:\t");
	scanf("%d%d",&n1,&n2);
	if(n1==n2 || n1>20 || n2>20)
	{
		printf("����������󣬲�������ĿҪ����������!\n");
			return;
	}
	s=fun(n1,n2);

	printf("\n\t��������������ǣ�%d �� %d ��\n",n1,n2);
	printf("\n\t����֮�������֮��Ϊ������������������%d ��\n\n",s);
	printf("\t");

//////////////////////////////   ������������ύ�Ծ�  //////////////////////////////////////////

	sprintf(record, "\n\t������������ǣ�%d �� %d \n\n\t����֮�������֮��Ϊ������������������%d\n\n", n1,n2,s);

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
