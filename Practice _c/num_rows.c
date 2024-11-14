#include <stdio.h>

int main() {
    int n = 1;
//pattern 1
    for (int i = 1; i <= 3; i++)
	 {
        for (int j = 1; j <= i; j++)
		 {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
//pattern 2

int numRows = 5;
    
    for (int i = 0; i < numRows; i++)
	 {
        int num = 1;
        for (int j = 0; j <= i; j++)
		 {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}

