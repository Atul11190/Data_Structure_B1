#include <stdio.h>

/* Function to convert decimal to binary*/
void decimalToBinary(int decimal);
    
int main() 
{
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal < 0) {
        printf("Please enter a non-negative decimal number.\n");
    } else {
        decimalToBinary(decimal);
    }

    return 0;
}

/* Function to convert decimal to binary*/
void decimalToBinary(int decimal) {
    int binary[32]; // Assuming a 32-bit binary representation
    int index = 0;

    /* Handle the case of 0 explicitly*/
    if (decimal == 0) {
        printf("Binary: 0\n");
        return;
    }

    /* Convert decimal to binary*/
    while (decimal > 0) {
        binary[index++] = decimal % 2;
        decimal = decimal / 2;
    }

    /* Print the binary representation in reverse order*/
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

