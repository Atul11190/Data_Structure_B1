#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int code;
    char name[50];
    int yearOfJoining;
};

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Allocate memory for an array of Employee structures
    struct Employee *employees = (struct Employee *)malloc(n * sizeof(struct Employee));

    if (employees == NULL) {
        printf("Memory allocation failed.");
        return 1;
    }

    // Input data for each employee
    for (int i = 0; i < n; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Employee Code: ");
        scanf("%d", &employees[i].code);
        printf("Employee Name: ");
        scanf("%s", employees[i].name);
        printf("Year of Joining: ");
        scanf("%d", &employees[i].yearOfJoining);
    }

    int currentYear;
    printf("Enter the current year: ");
    scanf("%d", &currentYear);

    // Display employees with tenure >= 3 years
    printf("Employees with tenure >= 3 years:\n");
    for (int i = 0; i < n; i++) {
        int tenure = currentYear - employees[i].yearOfJoining;
        if (tenure >= 3) {
            printf("Employee Code: %d, Name: %s\n", employees[i].code, employees[i].name);
        }
    }

    // Free allocated memory
    free(employees);

    return 0;
}