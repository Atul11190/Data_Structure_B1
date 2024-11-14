#include <stdio.h>

int main() {
    long long limit = 20;  

    printf("Ramanujan Numbers up to %lld:\n", limit);
     for (long long num = 1; num <= limit; num++) 
	{
        int count = 0;

        for (long long a = 1; a * a * a < num; a++) {
            for (long long b = a; b * b * b < num; b++) {
                if (a * a * a + b * b * b == num) {
                    if (count == 0) {
                        printf("%lld (%lld^3 + %lld^3)", num, a, b);
                    } else {
                        printf(" and (%lld^3 + %lld^3)", a, b);
                    }
                    count++;
                }
            }
        }

        if (count > 1) {
            printf("\n");
        }
    }

    return 0;
}


