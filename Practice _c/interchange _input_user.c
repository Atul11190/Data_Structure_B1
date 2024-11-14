//input user element_array_odd_or_even
#include<stdio.h>

int main()
{ 
    int n;
    int a[]={};
    int i,temp;
    printf("enter a element\n");
    scanf("%d",&n);
    for(i=0;i<=5;i=i+2)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    for(i=0;i<=5;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}