#include <stdio.h>

int main() {
    int mat1[10][10], mat2[10][10], result[10][10];
    int i, j, k, r1, c1, r2, c2;

    // Input dimensions of matrices
    printf("Enter rows and columns for first matrix: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d%d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible. Column of first matrix must equal row of second matrix.\n");
        return 0;
    }

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("mat1[%d][%d] = ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("mat2[%d][%d] = ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Output result matrix
    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
