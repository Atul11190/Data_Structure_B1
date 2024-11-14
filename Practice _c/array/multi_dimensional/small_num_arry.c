#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    int smallest = *ptr;

    for (int i = 1; i < n; i++) {
        if (*(ptr + i) < smallest) {
            smallest = *(ptr + i);
        }
    }

    printf("The smallest number in the array is: %d\n", smallest);

    return 0;
}
