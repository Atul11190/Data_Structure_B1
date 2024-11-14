//input user element_array_odd_or_even
#include<stdio.h>

int main()
{ 
    int n;
    printf("enter the number of element in array");
    scanf("%d",&n);
    int a[n];
    printf("enter the elememt of the array");
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;
    
    for(int i=0;i<=n;i=i+2)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    for(int i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}