#include<stdio.h>
int main()
{
	int a,a1,a2,reminder;
	printf("enter the number a=");
	scanf("%d",&a);
	reminder=a%10;
	printf("%d",reminder);
	a1=a/10;
	reminder=a1%10;
	printf("%d",reminder);
	a2=a1/10;
	reminder=a2%10;
	printf("%d",reminder);
	return 0;
}
