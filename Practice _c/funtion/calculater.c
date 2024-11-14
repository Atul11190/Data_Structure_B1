#include<stdio.h>
#include<math.h>
// function to sum in two numbers
float sum(float,float);
// function to subtract in two numbers
float subtract(float,float);
// function to divide in two numbers
float divide(float,float);
// function to multiply in two numbers
float multiply(float,float);
// function to mod in two numbers
int mod(int,int);
// function to square root
double sqrtt(double);
int main()
{
    char op;
    float num1,num2;
    int a,b;
    printf("enter the operator");
    scanf("%c",&op);
    printf("enter the number");
    scanf("%f%f",&num1,&num2);
    switch (op)
    {
    case ('+'):
    sum=num1+num2;
    printf("%f+%f=%f/n",num1,num2);
        break;
    case ('-'):
    subtract=num1-num2;
    printf("%f-%f=%f/n",num1,num2);
        break;
    case ('/'):
    divide=num1/num2;
    printf("%f/%f=%f/n",num1,num2);
        break;
    case ('*'):
    multiply=num1*num2;
    printf("%f*%f=%f/n",num1,num2);
        break;
    case ('%'):
    mod=a%b;
    printf("%f%%f=%f/n",a,b);
        break;
    case ('|'):
    sqrtt=sqrt(num1);
    printf("enter|answer=%d",num1);
        break;
    default:
    printf("invalid operator\n");
    
    }
    return 0;
}