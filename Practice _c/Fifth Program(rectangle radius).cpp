#include<stdio.h>
int main()
{
	// area of rectangle of area
	float length,breath,radius,rectarea,circle;
	printf("enter the length and breath\n");
	scanf("%f%f",&length,&breath);
	rectarea=length*breath;
	printf("rectangle=%f\n",rectarea);
	//area of the circle
    printf(" the radius circle\n");
    scanf("%f",&radius);
    circle=2*22/7*radius*radius;
    printf("area of the circle %f",circle);
	
	return 0;
}
