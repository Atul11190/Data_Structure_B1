#include<stdio.h>
int main()
{
/*marksheet*/
float math,english,hindi,drawing,chemistry,physics,pers,total;
printf("enter the marks of math ");
scanf("%f",&math);
printf("enter the marks of english");
scanf("%f",&english);
printf("enter the marks of hindi");
scanf("%f",&hindi);
printf("enter the marks of drawing");
scanf("%f",&drawing);
printf("enter the marks of chemistry");
scanf("%f",&chemistry);
printf("enter the marks of physics");
scanf("%f",&physics);
total=math+english+hindi+drawing+chemistry+physics;
printf("\n the total of numbers=%f",total);
pers=total/6;
printf("\n presentage=%f",pers);
scanf("%f",&physics);
return 0;
}
