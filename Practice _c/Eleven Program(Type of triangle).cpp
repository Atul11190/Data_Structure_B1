#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter the sides of triangles\n");
	scanf("%d%d%d",&x,&y,&z);
	if((x==y)&&(y==z))
	{
		printf("equilateral");
	}
	else if((x==y)||(y==z)||(z==x))
	{
		printf("isosceles");
	}
	else
	{
		printf("scalen");
	}
	return 0;
}


