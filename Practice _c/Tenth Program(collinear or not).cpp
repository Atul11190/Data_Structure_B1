#include<stdio.h>
int main()
{   /*collinear or not*/
	int x1,y1,x2,y2,x3,y3,p;
	printf("enter the value of x1 and y1");
	scanf("%d%d",&x1,&y1);
	printf("enter the value of x2 and y2\n");
	scanf("%d%d",&x2,&y2);
	printf("enter the value of x3 and y3\n");
	scanf("%d%d",&x3,&y3);
	p=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
	if(p==0)
	{
		printf("it is collinear");
	}
	else
	{
		printf("it is not collinear");
	}
	return 0;
}
