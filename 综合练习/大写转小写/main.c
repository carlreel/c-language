#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "c:\\submit.c"

#define  testPaperId   "2004007_210"
#define  topicId   "2"
#define  contentKeyword			"���ַ����еĴ�д��ĸ��ΪСд��ĸ"
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
	char paperId[10] = {0};			//�Ծ���
	char keyword[50] = {0};			//�������ݹؼ���
	char record[1024]={0};			//�ύ�Ծ����Ϣ

//////////////////////////////   ���ϱ��������ύ�Ծ�   ///////////////////////////////////////
	char s[1024],s_backup[1024];

	printf("\n\t����һ��������д��ĸ���ַ���: \t");
	gets(s);
	strcpy(s_backup,s);
	fun(s);
	printf("\n\t����������ַ�����%s\n\n\t�� fun���������%s\n",s_backup,s);
	printf("\n\t");


//////////////////////////////   ������������ύ�Ծ�  //////////////////////////////////////////
	sprintf(record, "\t����������ַ�����%s\n\t�� fun���������%s\n",s_backup,s);

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
