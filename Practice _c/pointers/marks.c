#include<stdio.h>
void display1(int );
void display2(int *);
int main()
{
    int i;
    int marks[]={2,4,6,8,10,12,14};
    for(i=0;i<=6;i++)
    {
        display1(marks[i]);
    }
    for(i=0;i<=6;i++)
    {
        display2(&marks[i]);
    }
    display1(int m)
    {
        printf("%d",m);
    }
    display1(int *n);
    {
        printf("%d",*n);
    }
}
