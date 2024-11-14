#include<stdio.h>
int main()
{
	int num,i=1,t;
	printf("enter the number to print the table ");
	scanf("%d",&num);
	while(i<=10)
	{
		t=num*i;
		printf("%d*%d=%d\n",num,i,t);
		i++;
	}
return 0;
}
