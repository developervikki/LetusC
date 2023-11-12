#include <stdio.h>
int main() {
    int i, j, rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    for (i = 1; i <= rows; i++) { 
        for (j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols) {
                printf("* ");
            } else {
                printf("  ");
            }
        } 
        printf("\n");
    }
    return 0;
}

