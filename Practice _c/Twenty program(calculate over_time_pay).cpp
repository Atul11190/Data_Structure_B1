#include<stdio.h>
int main()
{
	int x=1,working_hours,over_time;
	float over_time_pay;
	while(x<=10)
	{
		printf("enter the working_hours");
		scanf("%d",&working_hours);
		if(working_hours>=40)
		{
			over_time=working_hours-40;
			over_time_pay=over_time*12;
			printf("the value to be pay extra -->%f",over_time_pay);
		}
		else
		{
			printf("more than 40 hours\n");
			}
			x++;
	}
}
