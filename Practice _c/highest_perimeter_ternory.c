#include <stdio.h>
int main() {
int length1, breadth1, length2, breadth2, length3, breadth3;
// Input for Rectangle 1
printf("Enter the length and breadth of Rectangle 1: ");
scanf("%d %d", &length1, &breadth1);
// Input for Rectangle 2
printf("Enter the length and breadth of Rectangle 2: ");
scanf("%d %d", &length2, &breadth2);
// Input for Rectangle 3
printf("Enter the length and breadth of Rectangle 3: ");
scanf("%d %d", &length3, &breadth3);
// Calculate perimeters
int perimeter1 = 2 * (length1 + breadth1);
int perimeter2 = 2 * (length2 + breadth2);
int perimeter3 = 2 * (length3 + breadth3);
// Find the rectangle with the highest perimeter using ternary operator
int maxPerimeter = (perimeter1 > perimeter2) ? ((perimeter1 > perimeter3) ?
perimeter1 : perimeter3) : ((perimeter2 > perimeter3) ? perimeter2 :
perimeter3);
// Determine which rectangle has the highest perimeter and print the result
if (maxPerimeter == perimeter1) {
printf("Rectangle 1 has the highest perimeter.\n");
} else if (maxPerimeter == perimeter2) {
printf("Rectangle 2 has the highest perimeter.\n");
} else {
printf("Rectangle 3 has the highest perimeter.\n");
}
return 0;
}
