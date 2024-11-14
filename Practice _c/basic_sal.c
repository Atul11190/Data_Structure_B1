//Experiment no 1 Q1 to find the gross salary 
#include<stdio.h>
int main()
{
	float gs,da,hra,bs;
	printf("enter the basic salary of the employee\n");
	//taking basic salary in input
	scanf("%f",&bs);
	//calculating da and hra
	da=.4*bs;
	hra=.2/100*bs;
	//calculating gross salary
	gs=bs+da+hra;
	printf("the gross salary is =%f\n",gs);
	//printing the hra and da of employee
	printf("the HRA of employee id =%f\n",hra);
	printf("the DA of employee is=%f\n",da);
	return 0;
	
}
