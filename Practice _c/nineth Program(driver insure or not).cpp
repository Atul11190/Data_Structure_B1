//insurance of driver program
#include<stdio.h>
int main()
{
	char sex, ms;
	int age;
	printf("enter your age sex in M AND F and your marital status in U AND M\n ");
	scanf("%d %c %c",&age,&sex,&ms);
	if((ms=='m')||(ms='u'&&sex=='m'&&age>30)||(ms='u'&&sex=='f'&&age>25))
	{
		printf("driver shoud be insured");
	}
	else
	{
		printf("driver should not be insured");
	}
	return 0;
}
