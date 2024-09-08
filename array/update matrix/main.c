#include <stdio.h>

int main() {
    int matrix[2][2] = {{10, 20},{30, 40}};
    matrix[0][1] = 25;
    printf("Updated 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {           
        for (int j = 0; j < 2; j++) {       
            printf("%d ", matrix[i][j]);    
        }
        printf("\n");                      
    }

    return 0;
}
