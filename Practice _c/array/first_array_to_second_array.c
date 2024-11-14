#include<stdio.h>
int main()
{
    int i;
    int ar[10];
    int ar2[10];

for(i=0;i<=9;i++)
{
    printf("enter the number");
    scanf("%d",&ar[i]);
}
for(i=9;i>=0;i--)
{
printf("The reverse numbers are: %d \n",ar[i]);
}
for(i=0;i<=9;i++)
{
ar2[i]=ar[i];
printf("%d\n",ar2[i]);
}
return 0;
}

