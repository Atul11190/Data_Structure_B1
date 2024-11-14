#include<stdio.h>
int main()
{
    int i=3,*j;
    j=&i;
    printf("adderess of i:%u\n",&i);
    printf("value of i:%d\n",i,j);
    printf("value of i is:%d",*&j);
    return 0;
}