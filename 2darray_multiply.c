#include <stdio.h>

int main() {
    int a[3][4], b[4][2], result[3][2];
    int i, j, k;

    // Input for matrix A (3x4)
    printf("Enter elements of matrix A (3x4):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Input for matrix B (4x2)
    printf("\nEnter elements of matrix B (4x2):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize result matrix to 0
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 4; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display result matrix
    printf("\nResultant Matrix (3x2):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%5d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
