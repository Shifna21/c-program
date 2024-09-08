#include <stdio.h>
int main() 
{
    int matrix[3][3] = {{2, 4, 6},{8, 10, 12},{14, 16, 18}};
    printf("Diagonal elements of the matrix are:\n");
    for (int i = 0; i < 3; i++) 
    {
        printf("%d ", matrix[i][i]);
    }

    return 0;
}
