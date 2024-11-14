#include<stdio.h>
int main()
{
	/*fahrenheit convert to centigrade degree.*/
	float cal,f;
	printf("enter the temprature in fahrenheit:\n");
	scanf("%f",&f);
	cal=(f-32)*5/9;
	printf("the temprature in calcious=%f",cal);
return 0;
}