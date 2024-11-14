#include<stdio.h>
int main()
{
	int sum(int,int);
	int a,b,c;
	printf("enter two numbers:\n");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("%d",c);
	return 0;
}
int sum(int num1,int num2)
{
	return(num1+num2);
}