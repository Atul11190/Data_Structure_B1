#include <stdio.h>

int primeFactors(int num)
 {
    printf("Prime factors of %d are: ", num);
    for (int i = 2; i <= num; i++)
     {
    while (num % i == 0) {
    printf("%d ", i);
    num /= i;
        }
    }

    printf("\n");
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    primeFactors(num);

    return 0;
}
