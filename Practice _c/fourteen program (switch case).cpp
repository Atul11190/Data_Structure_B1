#include<stdio.h>
int main()
{
	char a;
	int num1,num2,num3,result;
	printf("enter the value +,-,/,=,*\n");
	scanf("%c",&a);
	printf("enter the value for oprations");
	scanf("%d%d",&num1,&num2);
	switch(a)
	{
	       case('+'):
	       result=num1+num2;
	       printf("enter + your result=%d",result);
	       break;
	       case('-'):
	       result=num1-num2;
	       printf("enter - your result=%d",result);
	       break;
	       case('/'):
	       result=num1/num2;
	       printf("enter / your result=%d",result);
	       break;
	       case('='):
	       result=num1=num2;
	       printf("enter = your result=%d",result);
	       break;
	       case('*'):
	       result=num1*num2;
	       printf("enter * your result=%d",result);
	       break;
	       default:
	       	printf("you enter the wrong value");
	       	break;
}
return 0;
}

