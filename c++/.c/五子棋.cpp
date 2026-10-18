#include "stdio.h"
b1(int x[19][19])
{int i,j;
for(i=0;i<19;i++)
	for(j=0;j<15;j++)
		if (x[i][j]+x[i][j+1]+x[i][j+2]+x[i][j+3]+x[i][j+4]==5) 
			return 1;
return 0;}
b2(int x[][19])
{int i,j;
for(j=0;j<19;j++)
	for(i=0;i<15;i++)
		if (x[i][j]+x[i+1][j]+x[i+2][j]+x[i+3][j]+x[i+4][j]==5)
			return 1;
return 0;}
b3(int x[][19])
{int i,j;
for(j=0;j<15;j++)
	for(i=0;i<15;i++)
		if (x[i][j]+x[i+1][j+1]+x[i+2][j+2]+x[i+3][j+3]+x[i+4][j+4]==5)
			return 1;
return 0;}
b4(int x[][19])
{int i,j;
for(j=18;j>3;j--)
	for(i=0;i<15;i++)
		if (x[i][j]+x[i+1][j-1]+x[i+2][j-2]+x[i+3][j-3]+x[i+4][j-4]==5)
			return 1;
return 0;}
w1(int x[][19])
{int i,j;
for(i=0;i<19;i++)
	for(j=0;j<15;j++)
		if (x[i][j]+x[i][j+1]+x[i][j+2]+x[i][j+3]+x[i][j+4]==-5) 
			return 1;
return 0;}
w2(int x[][19])
{int i,j;
for(j=0;j<19;j++)
	for(i=0;i<15;i++)
		if (x[i][j]+x[i+1][j]+x[i+2][j]+x[i+3][j]+x[i+4][j]==-5)
			return 1;
return 0;}
w3(int x[][19])
{int i,j;
for(j=0;j<15;j++)
	for(i=0;i<15;i++)
		if (x[i][j]+x[i+1][j+1]+x[i+2][j+2]+x[i+3][j+3]+x[i+4][j+4]==-5)
			return 1;
return 0;}
w4(int x[][19])
{int i,j;
for(j=18;j>3;j--)
	for(i=0;i<15;i++)
		if (x[i][j]+x[i+1][j-1]+x[i+2][j-2]+x[i+3][j-3]+x[i+4][j-4]==-5)
			return 1;
return 0;}
void show(int a[19][19])
{
    int i, j;

    // 行号占位：2位行号 + 1空格 = 3字符，和下面 "行号 " 对齐
    printf("  ");
    for (j = 0; j < 19; j++)
        printf("%2d", j);        // 每个列号占2字符，与棋子对齐
    printf("\n");

    for (i = 0; i < 19; i++)
    {
        printf("%2d ", i);       // 行号占2字符 + 1空格
        for (j = 0; j < 19; j++)
        {
            if (a[i][j] == 1)
                printf("● ");    // 棋子 + 空格 = 2字符
            else if (a[i][j] == -1)
                printf("○ ");
            else
                printf("· ");
        }
        printf("\n");
    }
    printf("\n");
}


main(){
static int a[19][19]={};
int x,y,i,t;
show(a);
for(i=t=0;t==0;i++)	
	if (i%2==0)
		{printf("白方回合"); 
		scanf("%d",&x);
		scanf("%d",&y);
		a[x][y]=1;
		show(a);
		t=b1(a)+b2(a)+b3(a)+b4(a);}
	else
		{printf("黑方回合"); 
		scanf("%d",&x);
		scanf("%d",&y);
		a[x][y]=-1;
		show(a);
		t=w1(a)+w2(a)+w3(a)+w4(a);}
if (i%2==1)
	printf("白胜");
else
	printf("黑胜");
}
