#include <stdio.h>

/*Function to print prime factors of a number*/
void primeFactors(int n);
int main() 
{
    int num;
	printf("Enter a positive integer: ");
    scanf("%d", &num);
	if (num <= 0)
	 {
    printf("Please enter a positive integer.\n");
    } else
	 {
        printf("Prime factors of %d are: ", num);
        primeFactors(num);
        printf("\n");
    }

    return 0;
}
// Function to print prime factors of a number
void primeFactors(int n)
 {
    // Print the number of 2s that divide n
    while (n % 2 == 0)
	 {
        printf("2 ");
        n = n / 2;
    }

    // n must be odd at this point, so a skip of 2 (i = i + 2) can be used
    for (int i = 3; i * i <= n; i = i + 2)
	 {
        // While i divides n, print i and divide n
        while (n % i == 0)
		 {
            printf("%d ", i);
            n = n / i;
        }
    }

    // If n is still greater than 1, then it is a prime number itself
    if (n > 1)
	 {
        printf("%d ", n);
    }
}

