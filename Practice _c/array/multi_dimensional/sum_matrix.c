#include <stdio.h>
int main()
 {
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{2, 5, 6}, {1, 3, 7}, {4, 9, 2}};
    int c[3][3];

    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("The sum of the matrix is: %d\n", c[1][j]);

    return 0;

}