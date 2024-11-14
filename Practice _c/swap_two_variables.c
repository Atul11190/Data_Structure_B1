#include <stdio.h>

/* Function to swap two variables using call by value*/
void swap(int a, int b);

int main() 
{
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    /*Call the swap function*/
    swap(x, y);
	return 0;
}
void swap(int a, int b) 
{
    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);
}
