#include<stdio.h>
int main()
{
    int i;
    int ar[10];

for(i=0;i<=9;i++)
{
    printf("enter the number");
    scanf("%d",&ar[i]);
}
for(i=9;i>=0;i--)
{
printf("The reverse numbers are: %d \n",ar[i]);
}
return 0;
}

