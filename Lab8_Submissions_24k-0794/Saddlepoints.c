#include <stdio.h>

int main() {
    int matrix[3][3], i, j;

    printf("Enter the elements of the 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Saddle points are:\n");
    for(i = 0; i < 3; i++) {
        int minRow = matrix[i][0];
        int colIndex = 0;

        for(j = 1; j < 3; j++) {
            if(matrix[i][j] < minRow) {
                minRow = matrix[i][j];
                colIndex = j;
            }
        }


        int isSaddlePoint = 1;
        for(j = 0; j < 3; j++) {
            if(matrix[j][colIndex] > minRow) {
                isSaddlePoint = 0;
                break;
            }
        }

        if(isSaddlePoint) {
            printf("Saddle point found at (%d, %d): %d\n", i, colIndex, minRow);
        }
    }

    return 0;
}
