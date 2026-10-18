#include "stdio.h"
main()
{int a[10];
int i,j,t;
printf("输入10个数：");
for(i=0;i<10;i++)scanf("%d",&a[i]);
for(i=0;i<9;i++)
	for(j=9;j>i;j--)
		if (a[j-1]>a[j])
			{t=a[j-1];a[j-1]=a[j];a[j]=t;}
printf("从小到大排列如下：");
for(i=0;i<10;i++)printf("%d\n",a[i]);
} 
