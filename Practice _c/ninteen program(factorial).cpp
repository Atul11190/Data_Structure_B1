#include<stdio.h>
int main()
{
	int x,i,fact=1;
	printf("enter a number");
	scanf("%d",&x);
	while(i<=x)
	{
		fact=fact*i;
		i++;
	}
	printf("factorial=%d",fact);
	return 0;
}
