// Q79: Perform diagonal traversal of a matrix.//

#include <stdio.h>
int main() {
    int n, m;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);
    int matrix[100][100];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int k = 0; k < n + m - 1; k++) {
        int row, col;

        if (k < m) {
            row = 0;
            col = k;
        } else {
            row = k - m + 1;
            col = m - 1;
        }

        while (row < n && col >= 0) {
            printf("%d ", matrix[row][col]);
            row++;
            col--;
        }
    }
    printf("\n");
    return 0;
}
