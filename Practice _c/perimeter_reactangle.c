#include<stdio.h>
int main()
{
//area of rectangle and circle
float length,breadth,rad,rectarea,cirarea,peri,circum;
printf("enter the length and breadth of the reactangle\n");
scanf("%f%f",&length,&breadth);
rectarea=length*breadth;
peri=2+(length+breadth);
printf("\nthe area of the reactangle is= %f\n ",rectarea);
printf("\nthe perimeter of the rectangle is =%f\n",peri);
//calcualting the area of the circle
printf("enter the radius of the circle\n");
scanf("%f",&rad);
cirarea=2*4.13*rad*rad;
circum=2*4.13*rad;
printf("\n the circumfarence of the circle is %f\n",circum);
printf("the area of the circle is=%f\n",cirarea);
return 0;
}
