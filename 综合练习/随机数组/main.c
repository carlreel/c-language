#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <time.h>

#include "c:\\submit.c"

#define  testPaperId   "2004007_210"
#define  topicId   "1"
#define  contentKeyword			"������ַ�������ȡ����Ԫ��������"
#define  correctKeyword   "71"

///////////////////////////////////////////////////////////////////////////////////////////////

int rand_number(int b[])  //�������ܣ�����100��100���ڵ������������b
{
    int a[101]= {0};
    int i,m;
    srand( (unsigned)time( NULL ) );
    for(i=1; i<=99; i++)
    {
        while(a[m=rand()%100+1])
            ;
        a[m] = i;
    }
    for(i=1;   i<=100;   ++i)
        b[i-1] = a[i];
    return 0;
}
/* fun�����Ĺ������ܸ���һ�������ַ��� xh �����һ���ַ�ת��Ϊ���ֺ�
��һ��100��Ԫ�����������a �ĽǱ�Ƚϣ���ͬ�ģ��������������� n������
n���������������
���磺xh�ַ���ĩβΪ 3�������� a��a[3],a[13],a[23],......a[83],a[93],
�������� n������ ���� n������������
*/
void fun(int *a, int n[],char *xh )
{
    int k,i,j,x=0,t;
    for (i=0; i<50; i++)
    {
        if (*(xh+i)=='\0')
        {
            break;
        }
    }
    k=*(xh+i-1)-'0';
    //printf("k=%d\n",k);
    for (j=0; j<100; j++)
    {
        if (j%10==k)
        {
            n[x]=*(a+j);
            x++;
            //printf("j+1Ϊ%d\n",j+1);
            //printf("*(a+j)Ϊ%d\n",*(a+j));

        }

    }
    for (j=0;j<9;j++)
    {
        //printf("n[%d]=%d\n",j,n[j]);
        for (i=0;i<9-j;i++)
        {
            if (n[i]>n[i+1])
            {
                t=n[i];
                n[i]=n[i+1];
                n[i+1]=t;
            }
        }
    }
    xh=n;



}


void main()
{
    char paperId[10] = {0};			//Ĭ���Ծ���
    char keyword[50] = {0};			//�������ݹؼ���
    char record[1024]= {0};			//�洢�ύ�Ծ����Ϣ
//////////////////////////////   ���ϱ��������ύ�Ծ�   ///////////////////////////////////////


    int num[100]= {0},r[10]= {0},i;
    char StudentId[50], printbuf[10240]= {0},temp[10240]= {0};

    printf("\n\t�����������ѧ��! ���������йء�\t");
    gets(StudentId);
    printf("\n\t");
    rand_number(num);

    fun(num, r,StudentId );

    sprintf(temp,"%s","������飺\n\n\t");
    strcat(printbuf,temp);

    for(i=0; i<100; i++)
    {
        sprintf(temp,"%4d ",num[i]);
        strcat(printbuf,temp);

        if((i+1)%10 == 0 )
        {
            sprintf(temp,"%c",'\n');
            strcat(printbuf,temp);
            sprintf(temp,"%c",'\t');
            strcat(printbuf,temp);
        }
    }

    sprintf(temp,"%c",'\n');
    strcat(printbuf,temp);
    sprintf(temp,"%c",'\t');
    strcat(printbuf,temp);

    sprintf(temp,"%s","������������\n\n\t");
    strcat(printbuf,temp);

    for(i =0; i<10; i++)
    {
        sprintf(temp,"%4d ",r[i]);
        strcat(printbuf,temp);
    }
    printf("\n\t%s",printbuf);
    printf("\n\n\t");


//////////////////////////////   ������������ύ�Ծ�  //////////////////////////////////////////

    sprintf(record, "\n\t�����ѧ�ţ�%s\n\n\t%s\n\n", StudentId,printbuf);

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


