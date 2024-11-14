#include <stdio.h>

int main() {
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    float num;

    while (1) {
        printf("Enter a number (enter 0 to stop): ");
        scanf("%f", &num);

        if (num > 0) {
            positive_count++;
        } else if (num < 0) {
            negative_count++;
        } else {
            zero_count++;
        }

        if (num == 0) {
            break;
        }
    }

    printf("Count of positive numbers: %d\n", positive_count);
    printf("Count of negative numbers: %d\n", negative_count);
    printf("Count of zeroes: %d\n", zero_count);

    return 0;
}
