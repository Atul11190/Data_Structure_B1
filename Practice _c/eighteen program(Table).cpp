#include<stdio.h>
int main()
{/*table by while loop*/
	int a,i=1,x;
	printf("enter a number to table");
	scanf("%d",&a);
	while(i<=10)
	{
		x=a*i;
		printf("%d\n",x);
		i++;
	}
	return 0;
}
