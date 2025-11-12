// Q78: Find the sum of main diagonal elements for a square matrix.//
#include <stdio.h>

int main() {
    int n, m, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int matrix[100][100];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (n != m) {
        printf("Not a square matrix\n");
        return 0;
    }
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("%d\n", sum);

    return 0;
}
