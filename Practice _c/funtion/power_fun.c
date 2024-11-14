#include <stdio.h>
int pow(int,int);
int main() 
{
     int b,e;
    printf("Enter the base:\n");
    scanf("%d", &b);
    printf("Enter the exponent:\n");
    scanf("%d", &e);
    power(b,e);
}
int power(int b,int e)
   {
     int power=1;
    while(e>0)
    {
        power=power*b;
        e--;
    }
    printf("the power of=%d",power);

return 0;
}

