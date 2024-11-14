#include<stdio.h>
int main()
{
	/*convert and print this distance*/
	float dis,m,cm,miles,inc;
	printf("enter hometown distance in km");
	scanf("%f",&dis);
	m+dis*1000;
	cm=dis*10000;
	inc=dis*39370;
	miles=dis*0.6;
	printf("\n %f distance in metres", m);
	printf("\n %f distance in centimetres", cm);
    printf("\n %f disttance in inches", inc);
    printf("\n %f distance in miles", miles);
	 return 0; 
}

