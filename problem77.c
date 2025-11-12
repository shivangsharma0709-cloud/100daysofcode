//Q77: Check if the elements on the diagonal of a matrix are distinct.//
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
    if (n != m) {
        printf("False\n"); 
        return 0;
    }
    int diagonal[100];
    int count = 0;
    for (int i = 0; i < n; i++) {
        diagonal[count++] = matrix[i][i];
    }
    int distinct = 1; 
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (diagonal[i] == diagonal[j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }

    if (distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}

