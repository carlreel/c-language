#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <time.h>

#include "c:\\submit.c"

#define  testPaperId   "2004007_210"
#define  topicId   "1"
#define  contentKeyword			"依最后字符从数组取出单元升序排列"
#define  correctKeyword   "71"

///////////////////////////////////////////////////////////////////////////////////////////////

int rand_number(int b[])  //函数功能：生成100个100以内的随机数的数组b
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
/* fun函数的功能是能根据一个数字字符串 xh 的最后一个字符转换为数字后，
与一个100单元的随机数数组a 的角标比较，相同的，过滤生成新数组 n，并对
n数组进行升序排序。
比如：xh字符串末尾为 3，则将数组 a的a[3],a[13],a[23],......a[83],a[93],
赋给数组 n，并对 数组 n进行升序排序。
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
            //printf("j+1为%d\n",j+1);
            //printf("*(a+j)为%d\n",*(a+j));

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
    char paperId[10] = {0};			//默认试卷编号
    char keyword[50] = {0};			//试题内容关键字
    char record[1024]= {0};			//存储提交试卷的信息
//////////////////////////////   以上变量用于提交试卷   ///////////////////////////////////////


    int num[100]= {0},r[10]= {0},i;
    char StudentId[50], printbuf[10240]= {0},temp[10240]= {0};

    printf("\n\t请先输入你的学号! 解题内容有关。\t");
    gets(StudentId);
    printf("\n\t");
    rand_number(num);

    fun(num, r,StudentId );

    sprintf(temp,"%s","随机数组：\n\n\t");
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

    sprintf(temp,"%s","函数处理结果：\n\n\t");
    strcat(printbuf,temp);

    for(i =0; i<10; i++)
    {
        sprintf(temp,"%4d ",r[i]);
        strcat(printbuf,temp);
    }
    printf("\n\t%s",printbuf);
    printf("\n\n\t");


//////////////////////////////   以下语句用于提交试卷  //////////////////////////////////////////

    sprintf(record, "\n\t输入的学号：%s\n\n\t%s\n\n", StudentId,printbuf);

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


