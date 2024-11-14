#include<stdio.h>
int main()
{
	
	/*ternory opretor*/
	int a,b,c;
	printf("enter value a");
	scanf("%d",&a);
    printf("enter value b");
	scanf("%d",&b);
	printf("enter value c");
	scanf("%d",&c);
	a>b?((a>c)?printf("a"):printf("c")):((b>c)?printf("b"):printf("c"));

	return 0;
}
