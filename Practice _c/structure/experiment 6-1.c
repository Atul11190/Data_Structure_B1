#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for cricketer records
struct Cricketer {
    char name[50];
    int age;
    int matches_played;
    float average_runs;
};

// Comparison function for qsort to compare cricketers by runs
int compareByRuns(const void *a, const void *b) {
    const struct Cricketer *cricketerA = (const struct Cricketer *)a;
    const struct Cricketer *cricketerB = (const struct Cricketer *)b;
    if (cricketerA->average_runs < cricketerB->average_runs) return -1;
    if (cricketerA->average_runs > cricketerB->average_runs) return 1;
    return 0;
}

int main()

{
  int i;
    // Create an array of structures to hold records of 20 cricketers
    struct Cricketer cricketers[20];

    // Code to populate the cricketer records goes here
    // For example:
    // cricketers[0] = {"Cricketer1", 28, 50, 45.5};
    // cricketers[1] = {"Cricketer2", 24, 35, 52.2};
    // ...

    // Sort the cricketers array by runs in ascending order using qsort
    qsort(cricketers, 20, sizeof(struct Cricketer), compareByRuns);

    // Display the sorte
	 //d cricketer records
    printf("Sorted Cricketer Records by Runs:\n");
    for ( int i = 0; i < 20; i++) { 
        printf("Name: %s, Age: %d, Matches Played: %d, Average Runs: %.2f\n",
               cricketers[i].name, cricketers[i].age, cricketers[i].matches_played, cricketers[i].average_runs);
    }

    return 0;
}