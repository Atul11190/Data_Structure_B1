#include <stdio.h>

int main() {
    int a[2][2];
    int trans[2][2]; // Declare 'trans' after initializing 'i' and 'j'
    int i, j,symmetric=1;
    double determinant,inverse[2][2];
    printf("Enter matrix elements:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix elements:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            trans[j][i] = a[i][j];
        }
    }

    printf("Transpose elements:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                if(a[i][j]!=trans[i][j])
                {
                    symmetric=0;
                    break;
                    }
            }
            if(!symmetric)
            {
                printf("the matrix ix symmetric\n");
            }
            else{
                printf("the matrix is not symmetric\n");
            }

            }
            printf("enter matrix element\n");
            for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate the determinant
    determinant = a[0][0] * a[1][1] - a[0][1] * a[1][0];

    if (determinant == 0.0) {
        printf("Matrix is singular, inverse doesn't exist.\n");
    } else {
        // Calculate the inverse
        inverse[0][0] = a[1][1] / determinant;
        inverse[0][1] = -a[0][1] / determinant;
        inverse[1][0] = -a[1][0] / determinant;
        inverse[1][1] = a[0][0] / determinant;

        // Display the inverse matrix
        printf("Inverse matrix:\n");
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                printf("%lf\t", inverse[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}