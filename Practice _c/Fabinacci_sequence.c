#include <stdio.h>

/*Fabinaaci sequence*/
void printFibonacci(int limit);
int main() 
{
    int limit;
	printf("Enter the number of Fibonacci terms to print: ");
    scanf("%d", &limit);
	if (limit < 1) 
    {
    printf("Please enter a positive number.\n");
    } else
     {
        printFibonacci(limit);
    }
	return 0;
}
void printFibonacci(int limit)
 {
    int a = 0, b = 1, c;
    printf("Fibonacci Sequence up to %d terms:\n", limit);

    /*Special case for the first two terms*/ 
    if (limit >= 1) 
    {
        printf("%d ", a);
    }
    if (limit >= 2) 
    {
        printf("%d ", b);
    }

    /*Generate and print the remaining terms*/
    for (int i = 3; i <= limit; i++) 
	{
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
	printf("\n");
}



