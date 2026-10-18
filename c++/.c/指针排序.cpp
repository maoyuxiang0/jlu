#include "stdio.h"
sorted(int n,int a[])
{int i,j,t;
for (i=0;i<n-1;i++)
	for (j=n-1;j>i;j--)
		if (*(a+j)<*(a+j-1))
			{t=*(a+j);*(a+j)=*(a+j-1);*(a+j-1)=t;
			}
}
main()
{int a[]={4,8,5,4,6};
sorted(5,a);
for (int i=0;i<5;i++)
	printf("%d\n",*(a+i));
}
