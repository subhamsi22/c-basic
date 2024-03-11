#include<stdio.h>

int main() {
    int i, j, r, c, a[10][10], b[10][10], s[10][10];

    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    // Reading the first matrix
    printf("Enter the values of the first matrix (%d x %d):\n", r, c);
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Reading the second matrix
    printf("Enter the values of the second matrix (%d x %d):\n", r, c);
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Calculating the sum of the two matrices
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            s[i][j] = a[i][j] + b[i][j];
        }
    }

    // Printing the sum of the two matrices
    printf("Sum of the two matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }

    return 0;
}
